SRC = ...

OBJS =	${SRC:.c=.o}

GCC = 	ggc -Werror -Wall -Wextra

RM = rm -rf

fclean =	clean
				${RM}
