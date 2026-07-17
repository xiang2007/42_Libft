# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wshou-xi <wshou-xi@student.42kl.edu.my>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/07/17 11:26:00 by wshou-xi          #+#    #+#              #
#    Updated: 2026/07/17 11:54:30 by wshou-xi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Werror -Wextra -fPIC -Iincludes
LINK = -I. -L. -lft
RM = rm -rf

MAIN := main.c

SRC_DIR := src
SRC_FILES := ft_atoi_test.c
SRC := $(addprefix $(SRC_DIR)/, $(SRC_FILES))

O_DIR := obj
OBJ := $(addprefix $(O_DIR)/, $(SRC_FILES:%.c=%.o))
NAME := test

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(MAIN) $(OBJ) $(LINK) -o $(NAME)

$(O_DIR)/%.o: $(SRC_DIR)/%.c
	mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(O_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re