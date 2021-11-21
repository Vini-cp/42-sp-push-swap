CC = gcc

NAME = push_swap.a

PRINTFNAME = libftprintf.a

PRINTFPATH = ./printf

CFLAGS = -Werror -Wall -Wextra

OBJS := $(*.o)

SRC = ./src/*.c


all: $(NAME)
.PHONY: all

${NAME}: fclean
	@make -C ${PRINTFPATH}
	@mv $(PRINTFPATH)/${PRINTFNAME} ${PRINTFNAME}
	@${CC} ${CFLAGS} ${SRC} ${PRINTFNAME} main.c -o ${NAME}
.PHONY: ${NAME}

clean:
	@rm -rf *.o
.PHONY: clean

fclean: clean
	@rm -f $(NAME)
	@rm -f $(PRINTFNAME)
.PHONY: fclean

re: fclean ${NAME}
.PHONY: re
