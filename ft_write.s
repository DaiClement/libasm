	global	ft_write ;_ft_write
	extern	__errno_location; ___error
	section	.text

ft_write:      
	mov		rax, 1
;_ft_write:		
;	mov		rax, 0x02000004 ; system call for write
	syscall                 ; invoke operating system to do the write
	cmp		rax, 0
	jl		write_neg
	ret

write_neg:
	mov		rdi, rax
	neg		rdi
	call	__errno_location; ___error
	mov		[rax], rdi
	mov		rax, -1
	ret
