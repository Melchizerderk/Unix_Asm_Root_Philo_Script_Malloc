section .text
	global _ft_memcmp

_ft_memcmp:
	push rdi
	push rsi
	pushf
	cld
while:
	repne cmpsb
	cmp rdi, 0
	jmp end
	cmp rsi, 0
	jmp end
	cmp rax, 0
	jne while
	jmp end
end:
	sub rdi, rsi
	mov rax, rdi
	popf
	pop rsi
	pop rdi
	ret
