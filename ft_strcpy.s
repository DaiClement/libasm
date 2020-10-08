	global	ft_strcpy;_ft_strcpy

	section	.text

;_ft_strcpy
ft_strcpy:
	cmp		rsi, 0
	je		strcpy_check_src
	jmp		strcpy_prepare

strcpy_check_src:
    cmp		rdi, 0
    je		strcpy_ret
    jmp		strcpy_prepare

strcpy_prepare:
	mov		rbx, rdi ;dest
	mov		rcx, rsi ;src
	mov		al, byte [rcx]

strcpy_cpy:
	cmp		al, 0
	je		strcpy_add_zero
	mov		al, byte [rcx]
	mov		byte [rbx], al
	add		rcx, 1
	add		rbx, 1
	jmp		strcpy_cpy

strcpy_add_zero:
	mov		byte[rbx], 0

strcpy_ret:
	mov		rax, rdi
	ret
