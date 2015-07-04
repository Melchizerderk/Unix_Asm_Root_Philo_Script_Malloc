section .text
	global _ft_memcpy

_ft_memcpy:
	push rdi
	pushf
	mov rbx, rsi
	mov rcx, rdx
	cld
	repne movsb
end:
	popf
	pop rdi
	mov rax, rdi
	ret
