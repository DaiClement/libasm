	global  ft_strdup 
	extern  malloc
	extern  ft_strlen
    extern  ft_strcpy
    ;global _ft_strdup
    ;extern _malloc
    ;extern _ft_strlen
    ;extern _ft_strdup
    section .text

ft_strdup:
;_ft_strdup:
    mov		r12, rdi
    call	ft_strlen
;	call	_ft_strlen

strdup_malloc:
    mov		rdi, rax
    call	malloc
;	call	_malloc
    mov		rdi, rax
    mov		rsi, r12
    call	ft_strcpy
;	call	_ft_strcpy
    ret
