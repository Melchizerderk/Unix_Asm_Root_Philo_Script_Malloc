section .text
	global _ft_memset

_ft_memset:
	push rdi
	pushf
	mov rbx, rsi
	mov rax, rbx
	mov rcx, rdx
	cld
	repne stosb
end:
	popf
	pop rdi
	mov rax, rdi
	ret
