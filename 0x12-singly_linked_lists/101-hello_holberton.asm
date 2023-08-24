section .data
	hello db "Hello, Holberton", 0
	newline db 10, 0

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

	lea rdi, [newline]
	call printf

	pop rax
	pop rsi
	pop rdi

	ret

section .data
	format db "%s"; 0

section .text
	global printf
