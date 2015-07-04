section .data
	newline: db " ", 0ah
	.len: equ $ - newline

section .text
	global _ft_puts
	extern _ft_strlen

_ft_puts:
	push rbp
	push rdi
	push rsi
func:
	call _ft_strlen
	lea rsi, [rel rdi];
	mov rdi, 1
	mov rdx, rax
	mov rax, 0x2000004
	syscall
	cmp rax, 0
	jl end
Eol:
	mov rax, 0x2000004
	mov rdi, 1
	lea rsi, [rel newline]
	mov rdx, newline.len
	syscall
	mov rax, 0x2000001
	xor rdi, rdi
	syscall
end:
	pop rdi
	pop rsi
	pop rbp
	ret
