
; ----------------------------------------------------------------------------------------
; This is an OSX console program that writes a little triangle of asterisks to standard
; output. Runs on macOS only.
;
;     nasm -fmacho64 triangle.asm && gcc hola.o && ./a.out
; ----------------------------------------------------------------------------------------

          global    ft_show_registre
			extern	printf
          section   .text
		
ft_show_registre:

;		mov		rax, 1
;		mov		rsi, rdi ;first arg
;		mov		rsi, rsi ;second arg
;		mov		rsi, rbp ;"p"
;		mov		rsi, rsp ;"N"
;		mov		rsi, rbx ;"\n"
;		mov		rsi, rdx ;third arg
;		mov		rdi, 1
;		mov		rdx, 5
;		syscall

;		mov		rdi, rdx
;		xor		rax, rax
;		call	printf
;		mov		rax, 1

		cmp		edx, 0
		jl		return_neg
		mov		eax, 3
		ret

return_neg:
		mov		eax, -1
		ret
