CC = gcc

NAME = push_swap.a

LIBFTNAME = libft.a

LIBFTPATH = ./libft

CFLAGS = -Werror -Wall -Wextra

SRCS_LIST = ft_initiate_stack.c ft_is_sorted.c ft_check_numbers.c ft_movements.c \
ft_swap.c ft_push.c ft_rotate.c ft_reverse_rotate.c ft_get_smallest_no.c ft_get_biggest_no.c \
ft_small_sort.c ft_medium_sort.c ft_big_sort.c ft_parse_numbers.c ft_free.c ft_arraylen.c

FOLDER = src

SRCS = $(addprefix ${FOLDER}/, ${SRCS_LIST})

OBJS = ${SRCS:.c=.o}


all: $(NAME)
.PHONY: all

$(NAME): $(OBJS)
	@$(MAKE) -C $(LIBFTPATH)
	@cp $(LIBFTPATH)/$(LIBFTNAME) $(NAME)
	@ar -rs $(NAME) $(OBJS)
	@gcc $(CFLAGS) ./$(NAME) main.c -o push_swap
.PHONY: ${NAME}

clean:
	@$(MAKE) -C $(LIBFTPATH) clean
	@rm -f $(OBJS)
	@rm -rf *.o
.PHONY: clean

fclean: clean
	@$(MAKE) -C $(LIBFTPATH) fclean
	@rm -f $(NAME)
	@rm -f push_swap
.PHONY: fclean

re: fclean all
.PHONY: re

ARGS="2 1 3 6 5 8 -10 51 12 0 7"
test:
	ARG="2 1 3 6 5 8 -10 51 12 0 7"; ./push_swap $ARG | ./checker_Mac $ARG
# leaks -atExit -- ./push_swap $(ARGS)
