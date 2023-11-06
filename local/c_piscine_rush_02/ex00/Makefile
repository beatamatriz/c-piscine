NAME = rush-02

SRCS = ./dict_reader.c ./input_verifiers.c ./number_getters.c ./output_writers.c ./process_number.c ./rush02.c ./string_finder.c

OBJS = ${.:.c=.o}

FLAGS = -Wall -Werror -Wextra

all:	${NAME}

${NAME}: ${OBJS}
	cc -o ${NAME} ${SRCS} -Iincludes ${FLAGS}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all
.PHONY: all clean fclean