.globl nCr
	.type	nCr, @function
nCr:
	pushq	%rbp
	movq	%rsp, %rbp
	movl	%edi, -20(%rbp)
	movl	%esi, -24(%rbp)
	cmpl	$12, -20(%rbp)
	jg	.L2
	cmpl	$12, -24(%rbp)
	jle	.L3
.L2:
	movl	$0, %eax
	jmp	.L4
.L3:
	movl	$1, -8(%rbp)
	movl	-24(%rbp), %eax
	movl	-20(%rbp), %edx
	subl	%eax, %edx
	movl	-24(%rbp), %eax
	cmpl	%eax, %edx
	cmovle	%edx, %eax
	movl	%eax, -24(%rbp)
	movl	$1, -4(%rbp)
	jmp	.L5
.L6:
	movl	-8(%rbp), %eax
	imull	-20(%rbp), %eax
	movl	%eax, %edx
	sarl	$31, %edx
	idivl	-4(%rbp)
	movl	%eax, -8(%rbp)
	addl	$1, -4(%rbp)
	subl	$1, -20(%rbp)
.L5:
	movl	-4(%rbp), %eax
	cmpl	-24(%rbp), %eax
	jle	.L6
	movl	-8(%rbp), %eax
.L4:
	leave
	ret

.globl Factorial
	.type	Factorial, @function
Factorial:

	pushq	%rbp
	movq	%rsp, %rbp
	movl	%edi, -20(%rbp)
	movl	$1, -4(%rbp)
	cmpl	$0, -20(%rbp)
	js	.L7
	cmpl	$12, -20(%rbp)
	jle	.L8
.L7:
	movl	$0, %eax
	jmp	.L9
.L8:
	movl	$1, -8(%rbp)
	jmp	.L10
.L11:
	movl	-4(%rbp), %eax
	imull	-8(%rbp), %eax
	movl	%eax, -4(%rbp)
	addl	$1, -8(%rbp)
.L10:
	movl	-8(%rbp), %eax
	cmpl	-20(%rbp), %eax
	jle	.L11
	movl	-4(%rbp), %eax
.L9:
	leave
	ret
