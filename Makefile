# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wshou-xi <wshou-xi@student.42kl.edu.my>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/04 16:40:40 by wshou-xi          #+#    #+#              #
#    Updated: 2026/07/17 11:54:26 by wshou-xi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Werror -Wextra -fPIC -Iincludes
AR = ar rcs
RM = rm -rf

SRC_DIR = src
SRC_FILE = ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c ft_strlen.c \
           ft_strnstr.c ft_strrchr.c ft_substr.c ft_tolower.c ft_toupper.c \
           ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c \
           ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c \
           ft_strmapi.c ft_strncmp.c ft_strtrim.c ft_memcmp.c \
           ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
           ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c
SRC = $(addprefix $(SRC_DIR)/,$(SRC_FILE))

BONUS_DIR = bonus
BONUS_FILE = ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c ft_lstiter.c \
             ft_lstmap.c ft_lstnew.c ft_lstsize.c ft_lstlast.c
BONUS = $(addprefix $(BONUS_DIR)/,$(BONUS_FILE))

OBJS_DIR = obj
A_OBJ = $(SRC) $(BONUS)
OBJS := $(A_OBJ:%.c=$(OBJS_DIR)/%.o)
NAME = libft.a

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

$(OBJS_DIR)/%.o: %.c
	mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: clean fclean re all
clean:
	$(RM) $(OBJS_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all
