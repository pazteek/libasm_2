
section .text
	global _ft_strcmp

_ft_strcmp:
mov rax, -1
loop: inc	rax
	mov r9b, byte[rsi + rax]
	mov r8b, byte[rdi + rax]
	cmp	r8b,0
	je retour
	cmp r8b , r9b
	je loop
	cmp r8b, r9b
	jl inf
sup:
	mov rax,1
	ret
inf:
mov rax, -1
ret
retour :
cmp r9b,0
jne inf
mov rax,0
ret
