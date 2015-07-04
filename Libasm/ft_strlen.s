section .text
 	global _ft_strlen

_ft_strlen:
	push rdi
	pushf
	mov al, 0
	mov rcx, 0
	cld
lwhile:
	not rcx
	repne scasb
	not rcx
	dec rcx
end:
	mov rax, rcx
	popf
	pop rdi
	ret
