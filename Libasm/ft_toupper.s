section .text
	global _ft_toupper

_ft_toupper:
	push rdi
start:
	mov r15, rdi
if:
	cmp r15, 97
	jl end
	cmp r15, 122
	jg end
	sub r15, 32
end:
	mov rax, r15
	pop rdi
	ret
