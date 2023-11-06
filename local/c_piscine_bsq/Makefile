NAME = bsq

SRCS = ./dimension_getters.c ./file_reader.c ./output_printer.c ./histogram_algorithm.c ./main.c

OBJS = ${.:.c=.o}

FLAGS = -Wall -Werror -Wextra

all:	${NAME}

${NAME}: ${OBJS}
	cc -o ${NAME} ${SRCS} -Ilibraries ${FLAGS}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all
.PHONY: all clean fclean
