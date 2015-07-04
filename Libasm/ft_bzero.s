section .text
	global _ft_bzero

_ft_bzero:
	push rdi
	push rsi
	mov r15, rdi
while:
	cmp rsi, 0
	je end
	cmp r15, 0
	je end
	mov byte [r15], 0
	inc r15
	dec rsi
	jmp while
end:
	pop rsi
	pop rdi
	ret
