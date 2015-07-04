section .text
	global _ft_isprint

_ft_isprint:
	push rdi
if:
	cmp rdi, 32
	jl false
	cmp rdi, 126
	jg false
	mov rax, 1
	jmp end
false:
	mov rax, 0
end:
	pop rdi
	ret
