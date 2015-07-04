segment .data
	array1 dw 5, 4, 3, 2, 1
section .text
	global _main

_main:
	mov rdi, dw
	call _ft_strlen
	ret
