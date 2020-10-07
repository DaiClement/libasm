	global	ft_strlen ;_ft_strlen
	section	.text

;_ft_strlen:
ft_strlen:	
	mov 	rax, 0
	mov		r13b, byte [rdi]

strlen_inc:
	cmp		r13b, 0 			;1octet
	je		strlen_ret
	inc		rax		 			;8octets
	inc		rdi
	mov		r13b, byte [rdi]
	jmp		strlen_inc

strlen_ret:
	ret