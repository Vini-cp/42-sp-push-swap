NAME = libft.a

SRC = ft_atoi.c ft_isdigit.c ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c \
ft_lstiter.c ft_lstlast.c ft_lstnew.c ft_lstpop_back.c ft_lstpop_front.c \
ft_lstsize.c ft_strlen.c ft_strncmp.c ft_substr.c ft_isspace.c ft_strdup.c \
ft_strlcpy.c ft_split.c

FOLDER = src

SRCS = $(addprefix ${FOLDER}/, ${SRC})

OBJ = $(SRCS:.c=.o)

RUNFLAGS = -Wall -Werror -Wextra

CFLAGS += -Wall -Werror -Wextra -I./ -c

.PHONY: all clean fclean re

all:    $(NAME)

$(NAME): $(OBJ)
	@gcc $(CFLAGS) $(SRCS)
	@ar rc $(NAME) $(OBJ)
	@rm *.o

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re:     fclean all

test:
	@gcc $(RUNFLAGS) $(TEST) ./$(NAME) \
	&& ./a.out \
	&& rm ./a.out
