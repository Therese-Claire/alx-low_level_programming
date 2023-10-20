section .data
	format db 'Hello, Holberton', 0
	newline db 10, 0

section .text
	global main
	extern printf
main:
	sub rsp, 8             ; Align stack
	mov edi, format        ; Load the format string
	xor eax, eax           ; Clear eax
	call printf            ; Call printf

	mov edi, newline       ; Load the newline string
	xor eax, eax           ; Clear eax
	call printf            ; Call printf for the newline

	add rsp, 8             ; Restore stack
	xor eax, eax           ; Clear eax
	ret

