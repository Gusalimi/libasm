section .text
global ft_strcmp

ft_strcmp:
	mov al, [rdi]
	mov bl, [rsi]
	cmp al, 0
	je end
	cmp bl, 0
	je end
	cmp al, bl
	jne end
	inc rdi
	inc rsi
	jmp ft_strcmp

end:
	movzx rax, al
	movzx r8, bl
	sub rax, r8
	ret