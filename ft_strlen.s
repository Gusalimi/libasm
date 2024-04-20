global ft_strlen

ft_strlen:
	mov rax, 0
	jmp lp

lp:
	cmp byte [rdi + rax], 0
	je end
	inc rax
	jmp lp

end:
	ret