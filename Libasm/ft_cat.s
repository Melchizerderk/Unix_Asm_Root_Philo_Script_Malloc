section .bss
	buffer resb	1024
section .text
	global _ft_cat
	extern _ft_puts
	extern _ft_strlen

_ft_cat:
	push rdi
	mov r15d, edi
read:
	lea rsi, [rel buffer]
	mov rdx, 1024
	mov edi, r15d
	mov rax, 0x2000003
	syscall
write:
	mov r14, rax
	lea rsi, [rel buffer]
	mov rdi, 1
	mov rdx, rax
	mov rax, 0x2000004
	syscall
	cmp r14, 0
	je end
	jmp read
end:
	pop rdi
	ret
