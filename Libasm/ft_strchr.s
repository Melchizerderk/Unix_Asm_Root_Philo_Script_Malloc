section .text
	global _ft_strchr

_ft_strchr:
	push rdi
	pushf
	mov rbx, rsi
	mov rax, rbx
	mov rcx, rdx
	cld
	repne scasb
end:
	popf
	dec rdi
	mov rax, rdi
	pop rdi
	ret
