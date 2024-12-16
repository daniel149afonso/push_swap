# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/04 15:48:06 by daafonso          #+#    #+#              #
#    Updated: 2024/12/16 21:29:22 by daniel149af      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRC = push_swap.c \
		push.c \
		swap.c \
		rotate.c \
		reverse_rotate.c \
		initialization.c \
		stack.c \
		utils.c \
		sort3.c \
		sort5.c \
		sort_radix.c \
		valid_input.c \
		ft_split.c \
		free_error.c

OBJS =	$(SRC:.c=.o)

GCC = 	gcc

FLAGS = -Werror -Wall -Wextra

RM = rm -rf

all: $(NAME)

$(NAME): $(OBJS)
				$(GCC) $(FLAGS) $(OBJS) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
		$(RM) $(OBJS)

fclean: clean
			$(RM) ${NAME}

re:		fclean all

.PHONY: all clean fclean re
