section .text
	global _ft_tolower

_ft_tolower:
	push rdi
	pushf
start:
	mov r15, rdi
if:
	cmp r15, 65
	jl end
	cmp r15, 90
	jg end
	add r15, 32
end:
	mov rax, r15
	popf
	pop rdi
	ret
