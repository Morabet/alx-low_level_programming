#include "main.h"
#include <elf.h>

/**
 * check_elf - check if the file is an ELF
 * @header: ELF header structure
 * @name: name of the file
 * Return: void.
 */
void check_elf(Elf64_Ehdr header, char *name)
{
	if (header.e_ident[EI_MAG0] == ELFMAG0 &&
			header.e_ident[EI_MAG1] == ELFMAG1 &&
			header.e_ident[EI_MAG2] == ELFMAG2 &&
			header.e_ident[EI_MAG3] == ELFMAG3)
	{
		printf("ELF Header:\n");
	}
	else
	{
		dprintf(STDERR_FILENO, "Not ELF file: %s\n", name);
		exit(98);
	}
}
/**
 * print_Magic - print the Magic section from header
 * @header: ELF header structure
 * Return: void
 */
void print_Magic(Elf64_Ehdr header)
{
	int i;

	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%2.2x%s", header.e_ident[i], i == EI_NIDENT - 1 ? "\n" : " ");
}

/**
 * print_Class - print the Class section from header
 * @header: ELF header structure
 * Return: void
 */
void print_Class(Elf64_Ehdr header)
{
	printf("  Class:                             ");
	switch (header.e_ident[EI_CLASS])
	{
		case ELFCLASS64:
			printf("ELF64");
			break;
		case ELFCLASS32:
			printf("ELF32");
			break;
		case ELFCLASSNONE:
			printf("none");
			break;
		default:
			printf("<unknown: %x>",
					header.e_ident[EI_CLASS]);
	}
	printf("\n");
}
/**
 * print_Data - print the Data section from header
 * @header: ELF header structure
 * Return: void
 */
void print_Data(Elf64_Ehdr header)
{
	printf("  Data:                              ");
	switch (header.e_ident[EI_DATA])
	{
		case ELFDATA2LSB:
			printf("2's complement, little endian");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian");
			break;
		case ELFDATANONE:
			printf("none");
			break;
		default:
			printf("<unknown: %x>",
					header.e_ident[EI_CLASS]);
	}
	printf("\n");
}

/**
 * print_Version - print the Version section from header
 * @header: ELF header structure
 * Return: void
 */
void print_Version(Elf64_Ehdr header)
{
	printf("  Version:                           %d", header.e_ident[EI_VERSION]);
	switch (header.e_ident[EI_VERSION])
	{
		case EV_CURRENT:
			printf(" (current)");
			break;
		case EV_NONE:
			printf("%s", "");
			break;
	}
	printf("\n");
}

/**
 * print_osabi_2 - print the OS/ABI part 2 section from header
 * @header: ELF header structure
 * Return: void
 */
void print_osabi_2(Elf64_Ehdr header)
{
	switch (header.e_ident[EI_OSABI])
	{
		case ELFOSABI_MODESTO:
			printf("Novell - Modesto");
			break;
		case ELFOSABI_OPENBSD:
			printf("UNIX - OpenBSD");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App");
			break;
		case ELFOSABI_ARM:
			printf("ARM");
			break;
		default:
			printf("<unknown: %x>",
					header.e_ident[EI_OSABI]);
			break;
	}
}
/**
 * print_osabi - print the OS/ABI section from header
 * @header: ELF header structure
 * Return: void
 */
void print_osabi(Elf64_Ehdr header)
{
	printf("  OS/ABI:                            ");
	switch (header.e_ident[EI_OSABI])
	{
		case ELFOSABI_NONE:
			printf("UNIX - System V");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris");
			break;
		case ELFOSABI_AIX:
			printf("UNIX - AIX");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64");
			break;
		default:
			print_osabi_2(header);
			break;
	}
	printf("\n");
}

/**
 * print_abi_ver - print the ABI Version section from header
 * @header: ELF header structure
 * Return: void
 */
void print_abi_ver(Elf64_Ehdr header)
{
	printf("  ABI Version:                       %d\n",
			header.e_ident[EI_ABIVERSION]);
}

/**
 * print_type - print the type section from header
 * @header: ELF header structure
 * Return: void
 */
void print_type(Elf64_Ehdr header)
{
	unsigned int type = header.e_type;


	printf("  Type:                              ");
	
	if (header.e_ident[EI_DATA] ==  ELFDATA2MSB)
		type >>= 8;

	switch (type)
	{
		case ET_NONE:
			printf("NONE (None)");
			break;
		case ET_REL:
			printf("REL (Relocatable file)");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)");
			break;
		case ET_CORE:
			printf("CORE (Core file)");
			break;
		default:
			printf("<unknown> : %x", type);

	}
	printf("\n");
}

/**
 * print_entry - print the entry section from header
 * @header: ELF header structure
 * Return: void
 */
void print_entry(Elf64_Ehdr header)
{
	unsigned long int entry = header.e_entry;

	printf("  Entry point address:               ");

	if (header.e_ident[EI_DATA] ==  ELFDATA2MSB)
	{
		entry = ((entry << 8) & 0xFF00FF00) |
			((entry >> 8) & 0xFF00FF);
		entry = (entry << 16) | (entry >> 16);
	}
	if (header.e_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)entry);

	else
		printf("%#lx\n", entry);
}
/**
 * close_elf - closes the ELF file.
 * @f: file to close.
 * Return: void.
 */
void close_elf(ssize_t *f)
{
	if (close(*f) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %ld\n", *f);
		exit(98);
	}
}
/**
 * main - check the code for ALX School students.
 *
 * @ac: args count.
 * @av: args values.
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	ssize_t f, size;
	Elf64_Ehdr header;

	if (ac != 2)
	{
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n");
		exit(98);
	}

	f = open(av[1], O_RDONLY);
	if (f == -1)
	{
		dprintf(STDERR_FILENO, "Can't open the file : %s\n", av[1]);
		exit(98);
	}

	size = read(f, &header, sizeof(header));
	if (size != sizeof(header))
	{
		dprintf(STDERR_FILENO, "Can't read the file : %s\n", av[1]);
		exit(98);
	}

	check_elf(header, av[1]);

	print_Magic(header);
	print_Class(header);
	print_Data(header);
	print_Version(header);
	print_osabi(header);
	print_abi_ver(header);
	print_type(header);
	print_entry(header);

	close_elf(&f);
	return (0);
}
