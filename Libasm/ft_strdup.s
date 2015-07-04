section .text
	global _ft_strdup
	extern	_ft_strlen
	extern	_malloc
	extern	_ft_memcpy

_ft_strdup:
	push rdi
	pushf
	mov r15, rdi
	call _ft_strlen
	inc rax
	mov rdi, rax
	mov r14, rax
	call _malloc
	mov rsi, rdi
	mov rdi, rax
	mov rdx, r14
	call _ft_memcpy
while:
	cmp r14, 0
	je add0
	inc rax
	dec r14
	jmp while
add0:
	mov byte [rax], 0
	mov rdi, rax
end:
	popf
	pop rdi
	mov rax, rdi
	ret
