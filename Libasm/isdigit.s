	.section	__TEXT,__text,regular,pure_instructions
	.globl	_ft_isdigit
	.align	4, 0x90
_ft_isdigit:                            ## @ft_isdigit
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
	movl	%edi, -8(%rbp)
	cmpl	$48, -8(%rbp)
	jl	LBB0_2
## BB#1:
	cmpl	$57, -8(%rbp)
	jle	LBB0_4
LBB0_2:
	cmpl	$0, -8(%rbp)
	jl	LBB0_5
## BB#3:
	cmpl	$9, -8(%rbp)
	jg	LBB0_5
LBB0_4:
	movl	$1, -4(%rbp)
	jmp	LBB0_6
LBB0_5:
	movl	$0, -4(%rbp)
LBB0_6:
	movl	-4(%rbp), %eax
	popq	%rbp
	retq
	.cfi_endproc


.subsections_via_symbols
