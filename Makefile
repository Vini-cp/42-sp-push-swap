CC = gcc

NAME = push_swap.a

LIBFTNAME = libft.a

LIBFTPATH = ./libft

CFLAGS = -Werror -Wall -Wextra

SRCS_LIST = 

FOLDER = src

SRCS = $(addprefix ${FOLDER}/, ${SRCS_LIST})

OBJS = ${SRCS:.c=.o}


all: $(NAME)
.PHONY: all

$(NAME): $(OBJS)
	@$(MAKE) -C $(LIBFTPATH)
	@cp $(LIBFTPATH)/$(LIBFTNAME) $(NAME)
	@ar -rcs $(NAME) $(OBJS)
.PHONY: ${NAME}

clean:
	@$(MAKE) -C $(LIBFTPATH) clean
	@rm -rf *.o
.PHONY: clean

fclean: clean
	@$(MAKE) -C $(LIBFTPATH) fclean
	@rm -f $(NAME)
.PHONY: fclean

re: fclean all
.PHONY: re

test:
	@gcc $(CFLAGS) main.c ./$(NAME) \
	&& ./a.out \
	&& rm ./a.out
