section .text
	global _ft_strdup
	extern _malloc
	extern _ft_strlen
	extern _ft_strcpy

_ft_strdup:

call _ft_strlen
inc rax
push rdi
mov rdi,rax
call _malloc
cmp rax,0
je error
pop r9
mov rdi,rax
mov rsi,r9
call _ft_strcpy
ret

error:
ret
