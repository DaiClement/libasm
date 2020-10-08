	global	ft_strcmp;_ft_strcmp
	section	.text

;_ft_strcmp
ft_strcmp:
	cmp		rdi, rsi
	je		cmp_ret0
    mov		al, byte [rdi]
    mov		cl, byte [rsi]

strcmp_cmp:
	movzx	rdx, al
	movzx	rbx, cl
	sub		rdx, rbx
	cmp		cl, 0
	je		cmp_ret1
	cmp		al, 0
	je		cmp_ret_neg
	cmp		rdx, 0
	jg		cmp_ret1
	cmp		rdx, 0
	jl		cmp_ret_neg
	inc		rdi
	inc		rsi
	mov		al, byte [rdi]
	mov		cl, byte [rsi]
	jmp		strcmp_cmp

cmp_ret1:
	mov		rax, 1
	ret

cmp_ret_neg:
	mov		rax, -1
	ret

cmp_ret0:
	mov		rax, 0
	ret
