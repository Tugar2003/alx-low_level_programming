section .data
	hello db "Hello, Holberton", 0
	format db "%s"; 0

section .text
	extern printf
	global main

main:
	push rdi
	push rdi
	push rax

	lea rdi, [hello]
	lea rsi, [format]
	call printf

	mov rdi, 0xA
	call putchar

	pop rax
	pop rsi
	pop rdi

	ret

section .txt
	global putchar
putchar:

	ret
