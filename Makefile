CC = gcc

NAME = push_swap.a

LIBFTNAME = libft.a

LIBFTPATH = ./libft

CFLAGS = -Werror -Wall -Wextra

SRCS_LIST = ft_initiate_stack.c ft_is_sorted.c ft_print_lst.c ft_check_numbers.c\
ft_movements.c ft_swap.c ft_push.c ft_rotate.c ft_reverse_rotate.c

FOLDER = src

SRCS = $(addprefix ${FOLDER}/, ${SRCS_LIST})

OBJS = ${SRCS:.c=.o}


all: $(NAME)
.PHONY: all

$(NAME): $(OBJS)
	@$(MAKE) -C $(LIBFTPATH)
	@cp $(LIBFTPATH)/$(LIBFTNAME) $(NAME)
	@ar -rs $(NAME) $(OBJS)
.PHONY: ${NAME}

clean:
	@$(MAKE) -C $(LIBFTPATH) clean
	@rm -f $(OBJS)
	@rm -rf *.o
.PHONY: clean

fclean: clean
	@$(MAKE) -C $(LIBFTPATH) fclean
	@rm -f $(NAME)
.PHONY: fclean

re: fclean all
.PHONY: re

test:
	@gcc $(CFLAGS) ./$(NAME) main.c \
	&& ./a.out $(ARGS) \
	&& rm ./a.out
