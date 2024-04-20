extern ft_strlen
extern ft_strcpy
extern malloc
global ft_strdup

ft_strdup:
	push rdi
	call ft_strlen
	add rax, 1
	mov rdi, rax
	call malloc WRT ..plt
	cmp rax, 0
	je malloc_error
	pop rsi
	mov rdi, rax
	call ft_strcpy
	ret

malloc_error:
	mov rax, 0
	ret