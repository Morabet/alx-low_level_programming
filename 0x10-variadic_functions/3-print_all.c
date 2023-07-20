#include <stdio.h>
#include "variadic_functions.h"
/**
  * print_all - entry point
  * @format: param
  *
  */
void print_all(const char * const format, ...)
{
	char *str, *sep = "";
	unsigned int i = 0;
	va_list ap;

	va_start(ap, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(ap, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(ap, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(ap, double));
					break;
				case 's':
					str = va_arg(ap, char *);
					if (str == NULL)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					i++;
					continue;
			}
			sep = ", ";
			i++;
		}
	}
	va_end(ap);
	printf("\n");
}
