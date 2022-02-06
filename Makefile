NAME		= push_swap

LIBFT		= ./libft

SRCS_LIST 	= 	ft_initiate_stack.c \
				ft_is_sorted.c \
				ft_check_numbers.c \
				ft_movements.c \
				ft_swap.c \
				ft_push.c \
				ft_rotate.c \
				ft_reverse_rotate.c \
				ft_get_smallest_no.c \
				ft_get_biggest_no.c \
				ft_small_sort.c \
				ft_medium_sort.c \
				ft_big_sort.c \
				ft_parse_numbers.c \
				ft_free.c \
				ft_arraylen.c

FOLDER 		= src

SRCS 		= $(addprefix ${FOLDER}/, ${SRCS_LIST})

CFLAGS 		= -Werror -Wall -Wextra

CC 			= gcc

OBJS 		= ${SRCS:.c=.o}

.PHONY: all clean fclean re

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@ 

all: $(NAME)

$(NAME): $(OBJS)
	make -C $(LIBFT)
	$(CC) $(CFLAGS) -I$(LIBFT) $(OBJS) -L$(LIBFT) -lft main.c -o $(NAME)

clean:
	make -C $(LIBFT) clean
	@rm -f $(OBJS)
	@rm -rf *.o

fclean: clean
	make -C $(LIBFT) fclean
	@rm -f $(NAME)
	@rm -f push_swap

re: fclean all
