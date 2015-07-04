	.section	__TEXT,__text,regular,pure_instructions
	.globl	_ft_bzero
	.align	4, 0x90
_ft_bzero:                              ## @ft_bzero
	.cfi_startproc
## BB#0:
	pushq	%rbp
Ltmp2:
	.cfi_def_cfa_offset 16
Ltmp3:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Ltmp4:
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
LBB0_1:                                 ## =>This Inner Loop Header: Depth=1
	movb	$0, %al
	cmpq	$0, -16(%rbp)
	movb	%al, -17(%rbp)          ## 1-byte Spill
	jbe	LBB0_3
## BB#2:                                ##   in Loop: Header=BB0_1 Depth=1
	movq	-8(%rbp), %rax
	movsbl	(%rax), %ecx
	cmpl	$0, %ecx
	setne	%dl
	movb	%dl, -17(%rbp)          ## 1-byte Spill
LBB0_3:                                 ##   in Loop: Header=BB0_1 Depth=1
	movb	-17(%rbp), %al          ## 1-byte Reload
	testb	$1, %al
	jne	LBB0_4
	jmp	LBB0_5
LBB0_4:                                 ##   in Loop: Header=BB0_1 Depth=1
	movq	-8(%rbp), %rax
	movb	$48, (%rax)
	movq	-8(%rbp), %rax
	addq	$1, %rax
	movq	%rax, -8(%rbp)
	movq	-16(%rbp), %rax
	addq	$-1, %rax
	movq	%rax, -16(%rbp)
	jmp	LBB0_1
LBB0_5:
	popq	%rbp
	retq
	.cfi_endproc


.subsections_via_symbols
