section .text
global ft_strcpy

ft_strcpy:
    mov rax, 0
    jmp lp

lp:
	cmp byte [rsi + rax], 0
    je end
    mov cl, [rsi + rax]
    mov [rdi + rax], cl
    inc rax
    jmp lp

end:
    mov byte [rdi + rax], 0
    mov rax, rdi
    ret
