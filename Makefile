# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: daafonso <daafonso@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/04 15:48:06 by daafonso          #+#    #+#              #
#    Updated: 2025/02/11 19:51:51 by daafonso         ###   ########.fr        #
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
		free_error.c \
		utils2.c

OBJS = $(SRC:.c=.o)

CC = gcc
CFLAGS = -Werror -Wall -Wextra
RM = rm -rf

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
