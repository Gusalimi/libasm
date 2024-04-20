section .text
global ft_read

ft_read:
	mov rax, 0
	syscall
	cmp rax, 0
	jl error_end
	ret

error_end:
	mov rax, -1
	ret