section 	.text		;set a section
	extern printf		; Declare the printf function from C library
	global main		; Define the entry point of the program

main:
	mov	 RDI, msg	; Load the address of the message into the 'edi' register
	mov	 RAX, 0		;Set 'eax' to 0 to indicate there are no arguments for func printf
	call	 printf		; Call the printf function

section		.data
	msg db "Hello, Holberton", 0xa, 0 ; Define a null-terminated string with a new line (0xa) at the end

;EAX (or RAX in 64-bit mode):
;EAX is the primary accumulator register. It is used for most arithmetic and logical operations,
;as well as for storing function return values. In function calls, the return value is stored in the EAX register.

;EDI (or RDI in 64-bit mode)
;EDI is a general-purpose register, often used as a destination pointer for memory operations or string operations.

