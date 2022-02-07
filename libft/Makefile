NAME 		= libft.a

SRCS_LIST 	= 	ft_atoi.c \
				ft_isdigit.c \
				ft_isspace.c \
				ft_strlen.c \
				ft_strncmp.c \
				ft_strdup.c \
				ft_strlcpy.c \
				ft_substr.c \
				ft_lstadd_back.c \
				ft_lstadd_front.c \
				ft_lstpop_back.c \
				ft_lstpop_front.c \
				ft_lstclear.c \
				ft_lstiter.c \
				ft_lstlast.c \
				ft_lstnew.c \
				ft_lstsize.c

SRC_FOLDER		= src

OBJ_FOLDER		= obj

SRCS 			= $(addprefix ${SRC_FOLDER}/, ${SRCS_LIST})

OBJS 			= $(addprefix ${OBJ_FOLDER}/, ${SRCS:.c=.o})

CFLAGS 			= -Werror -Wall -Wextra -I.

CC 				= gcc

.PHONY: all clean fclean re build_folder

all: $(NAME)

$(NAME): $(OBJS)
	@ar -rcs $(NAME) $(OBJS)

$(OBJ_FOLDER)/%.o: %.c
	@mkdir -p obj/src
	$(CC) $(CFLAGS) -c -o $@ $<


clean:
	@rm -rf $(OBJ_FOLDER)

fclean: clean
	@rm -f $(NAME)

re: fclean all
