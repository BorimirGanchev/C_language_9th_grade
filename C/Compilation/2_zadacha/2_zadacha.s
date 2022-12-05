	.file	"2_zadacha.c"
	.text
	.section .rdata,"dr"
.LC0:
	.ascii "%d\0"
	.text
	.p2align 4
	.def	printf.constprop.0;	.scl	3;	.type	32;	.endef
	.seh_proc	printf.constprop.0
printf.constprop.0:
	pushq	%rbx
	.seh_pushreg	%rbx
	subq	$48, %rsp
	.seh_stackalloc	48
	.seh_endprologue
	movl	$1, %ecx
	leaq	72(%rsp), %rbx
	movq	%rdx, 72(%rsp)
	movq	%r8, 80(%rsp)
	movq	%r9, 88(%rsp)
	movq	%rbx, 40(%rsp)
	call	*__imp___acrt_iob_func(%rip)
	movq	%rbx, %r8
	leaq	.LC0(%rip), %rdx
	movq	%rax, %rcx
	call	__mingw_vfprintf
	addq	$48, %rsp
	popq	%rbx
	ret
	.seh_endproc
	.def	__main;	.scl	2;	.type	32;	.endef
	.section	.text.startup,"x"
	.p2align 4
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
	subq	$40, %rsp
	.seh_stackalloc	40
	.seh_endprologue
	call	__main
	xorl	%r9d, %r9d
	movl	$1, %ecx
	movl	$12, %r8d
	movl	$18, %r10d
	.p2align 4,,10
	.p2align 3
.L5:
	movl	%r8d, %eax
	cltd
	idivl	%ecx
	testl	%edx, %edx
	jne	.L4
	movl	%r10d, %eax
	cltd
	idivl	%ecx
	testl	%edx, %edx
	cmove	%ecx, %r9d
.L4:
	addl	$1, %ecx
	cmpl	$13, %ecx
	jne	.L5
	movl	$216, %eax
	leaq	.LC0(%rip), %rcx
	cltd
	idivl	%r9d
	movl	%eax, %edx
	call	printf.constprop.0
	xorl	%eax, %eax
	addq	$40, %rsp
	ret
	.seh_endproc
	.ident	"GCC: (Rev5, Built by MSYS2 project) 11.2.0"
	.def	__mingw_vfprintf;	.scl	2;	.type	32;	.endef
