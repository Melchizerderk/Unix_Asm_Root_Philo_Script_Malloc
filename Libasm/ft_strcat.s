section .text
	global _ft_strcat
	extern _ft_strlen

_ft_strcat:
	push rdi
	push rdi
w1:
	cmp byte [rdi], 0
	je while
	inc rdi
	jmp w1
while:
	cmp byte [rsi], 0
	je end
	mov al, [rsi]
	mov byte [rdi], al
	inc rdi
	inc rsi
	jmp while
end:
	pop rsi
	mov rdi, 0
	pop rdi
	mov rax, rdi
	ret
