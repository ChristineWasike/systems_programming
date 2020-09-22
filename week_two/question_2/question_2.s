	.file	"question_2.c"
	.text
	.section	.rodata
.LC0:
	.string	"Enter a positiVe number:"
.LC1:
	.string	"%d"
.LC2:
	.string	"The factorial of %d is %d \n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
.L2:
	leaq	.LC0(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	-20(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC1(%rip), %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	movl	-20(%rbp), %eax
	testl	%eax, %eax
	js	.L2
	movl	$1, -16(%rbp)
	movl	-20(%rbp), %eax
	movl	%eax, -12(%rbp)
	jmp	.L3
.L4:
	movl	-16(%rbp), %eax
	imull	-12(%rbp), %eax
	movl	%eax, -16(%rbp)
	subl	$1, -12(%rbp)
.L3:
	cmpl	$1, -12(%rbp)
	jg	.L4
	movl	-20(%rbp), %eax
	movl	-16(%rbp), %edx
	movl	%eax, %esi
	leaq	.LC2(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$0, %eax
	movq	-8(%rbp), %rcx
	xorq	%fs:40, %rcx
	je	.L6
	call	__stack_chk_fail@PLT
.L6:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 7.5.0-3ubuntu1~18.04) 7.5.0"
	.section	.note.GNU-stack,"",@progbits
