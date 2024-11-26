SRC = ...

OBJS =	${SRC:.c=.o}

GCC = 	gcc -Werror -Wall -Wextra

RM = rm -rf

fclean =	clean
				${RM}
