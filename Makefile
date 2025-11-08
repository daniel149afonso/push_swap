# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/04 15:48:06 by daafonso          #+#    #+#              #
#    Updated: 2025/11/08 03:02:35 by daniel149af      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= push_swap

SRC_DIR		= src
OBJ_DIR		= obj

SRC_FILES	= main/main.c \
			  move/push.c move/swap.c move/rotate.c move/reverse_rotate.c \
			  init/initialization.c \
			  stack/stack.c \
			  utils/utils.c utils/utils2.c utils/ft_split.c utils/free_error.c \
			  sorting/sort3.c sorting/sort5.c sorting/sort_radix.c \
			  parsing/valid_input.c

SRCS		= $(addprefix $(SRC_DIR)/, $(SRC_FILES))
OBJS		= $(SRCS:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

CC			= gcc
CFLAGS		= -Wall -Wextra -Werror
RM			= rm -rf

GREEN		= \033[1;92m
RESET		= \033[0m

all: $(NAME)

$(NAME): $(OBJS)
<<<<<<< HEAD
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo "$(GREEN)Compilation successfully ✅$(RESET)"
=======
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
>>>>>>> 704e01ab5eccc42292607bf1997665b28211c7e6

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
<<<<<<< HEAD
	@$(RM) $(OBJ_DIR)

fclean: clean
	@$(RM) $(NAME)
=======
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)
>>>>>>> 704e01ab5eccc42292607bf1997665b28211c7e6

re: fclean all

.PHONY: all clean fclean re
