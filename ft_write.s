section .text
extern __errno_location
global ft_write

ft_write:
	mov rax, 1
	syscall
	cmp rax, 0
	jl error_end
	ret

error_end:
	mov rdi, rax
	imul rdi, -1
	call __errno_location WRT ..plt
	mov [rax], rdi
	mov rax, -1
	ret