global ft_strlen

ft_strlen:
	mov rax, 0
	jmp loop

loop:
	cmp byte [rdi + rax], 0
	je end
	inc rax
	jmp loop

end:
	ret