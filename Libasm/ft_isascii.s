section .text
	global _ft_isascii

_ft_isascii:
	push rdi
if:
	cmp rdi, 0
	jl false
	cmp rdi, 127
	jnle false
	mov rax, 1
	jmp end
false:
	mov rax, 0
end:
	pop rdi
	ret

