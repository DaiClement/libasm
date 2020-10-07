          global    ft_read ;_ft_read
			extern	__errno_location
          section   .text
ft_read:      
            mov       rax, 0
;_ft_read:		
;           mov       rax, 0x02000003         ; system call for write
            syscall                           ; invoke operating system to do the write
			cmp		rax, 0
			jl		read_neg
            ret

read_neg:
			mov		rdi, rax
			neg		rdi
			call	__errno_location
			mov		[rax], rdi
			mov		rax, -1
			ret
