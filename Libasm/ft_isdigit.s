section .text
	global _ft_isdigit

_ft_isdigit:
	push rdi
if:
	cmp rdi, 48
	jnl if2
	jmp test
if2:
	cmp rdi, 59
	jle endif
test:
	cmp rdi, 0
	jl false
	cmp rdi, 9
	jg false
	jmp endif
false:
	mov rax, 0
	jmp end
endif:
	mov rax, 1
end:
	pop rdi
	ret
