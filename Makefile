NAME		= push_swap

LIBFT		= ./libft

SRCS_LIST 	= 	operations/ft_movements.c \
				operations/ft_push.c \
				operations/ft_reverse_rotate.c \
				operations/ft_rotate.c \
				operations/ft_swap.c \
				sort/ft_big_sort.c \
				sort/ft_medium_sort.c \
				sort/ft_small_sort.c \
				sort/ft_sort.c \
				utils/ft_check_numbers.c \
				utils/ft_exit_error.c \
				utils/ft_free.c \
				utils/ft_get_biggest_no.c \
				utils/ft_get_smallest_no.c \
				utils/ft_initiate_stack.c \
				utils/ft_is_sorted.c \
				utils/ft_parse_numbers.c \
				main.c

SRC_FOLDER 	= src

OBJ_FOLDER	= obj

SRCS 		= $(addprefix ${SRC_FOLDER}/, ${SRCS_LIST})

OBJS 		= $(addprefix ${OBJ_FOLDER}/, ${SRCS:.c=.o})

CFLAGS 		= -Werror -Wall -Wextra

CC 			= gcc

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	make -C $(LIBFT)
	$(CC) $(CFLAGS) -I$(LIBFT) $(OBJS) -L$(LIBFT) -lft -o $(NAME)

$(OBJ_FOLDER)/%.o: %.c
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	make -C $(LIBFT) clean
	@rm -rf $(OBJ_FOLDER)

fclean: clean
	make -C $(LIBFT) fclean
	@rm -f $(NAME)

re: fclean all
