	.file	"hello.c"
	.section	.rodata
.LC0:
	.string	"%i"
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
	subq	$16, %rsp
	# the value 5 is assigned to -8(%rbp) in memory
	movl	$5, -8(%rbp)
	# the value at -8(%rbp) is assigned to %eax
	movl	-8(%rbp), %eax
	# 1 is added to the value at %eax
	addl	$1, %eax
	# the value at %eax is moved to -4(%rbp)
	movl	%eax, -4(%rbp)
	# the value at -4(%rbp) is moved to %eax
	movl	-4(%rbp), %eax
	movl	%eax, %esi
	movl	$.LC0, %edi
	movl	$0, %eax
	call	printf
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.5) 5.4.0 20160609"
	.section	.note.GNU-stack,"",@progbits
