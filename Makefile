NAME = libasm.a
SRCS = ft_strlen.s ft_strcpy.s ft_strcmp.s ft_write.s ft_read.s
OBJS = $(SRCS:.s=.o)

FLAGS = -f elf64

RM = rm -rf

%.o: %.s
	nasm $(FLAGS) $< -o $@ 

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

test: fclean all
	@gcc main.c libasm.a
	@echo ""
	@echo "=== Main ==="
	@./a.out
	@echo ""
	@rm a.out
