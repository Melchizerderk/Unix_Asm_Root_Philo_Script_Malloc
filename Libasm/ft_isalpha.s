section .text
	global _ft_isalpha

_ft_isalpha:
	push rbp
	push rdi
if:
	cmp rdi, 65
	jnl ifmaj
	jmp false
ifmaj:
	cmp rdi, 90
	jle true
	cmp rdi, 97
	jnl ifmin
	jmp false
ifmin:
	cmp rdi, 122
	jle true
	jmp false
false:
	mov rax, 0
	jmp end
true:
	mov rax, 1
	jmp end
end:
	pop rdi
	pop rbp
	ret
