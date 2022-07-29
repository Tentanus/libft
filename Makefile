# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: mweverli <marvin@codam.nl>                   +#+                      #
#                                                    +#+                       #
#    Created: 2021/11/29 13:21:58 by mweverli      #+#    #+#                  #
#    Updated: 2022/07/29 15:07:29 by mweverli      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #
# VARIABLES

NAME		:=	libft.a
OBJ_DIR		:=	./OBJ
SRC_DIR		:=	./src
HEA_DIR		:=	./include

HEADER		:=	-I $(HEA_DIR)

SRC =	ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_strlen.c \
		ft_memset.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		\
		ft_toupper.c \
		ft_tolower.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strncmp.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_strnstr.c \
		ft_atoi.c \
		\
		ft_calloc.c \
		ft_strdup.c \
		\
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_split.c \
		ft_itoa.c \
		ft_strmapi.c \
		ft_striteri.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \

OBJ = $(addprefix $(OBJ_DIR)/,$(SRC:.c=.o))

SRC_BONUS =	$(SRC) \
			ft_lstnew_bonus.c \
			ft_lstadd_front_bonus.c \
			ft_lstsize_bonus.c \
			ft_lstlast_bonus.c \
			ft_lstadd_back_bonus.c \
			ft_lstdelone_bonus.c \
			ft_lstclear_bonus.c \
			ft_lstiter_bonus.c \
			ft_lstmap_bonus.c

OBJ_BONUS = $(addprefix $(OBJ_DIR)/,$(SRC_BONUS:.c=.o))

CC		:=	gcc
CFL		:=	-Wall -Werror -Wextra

# RECIPIES:

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $^

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(@D)
	$(CC) $(CFL) -c $< -o $@ $(HEADER)

bonus: $(OBJ) $(OBJ_BONUS)
	ar rcs $(NAME) $^

clean:
	@mkdir -p $(OBJ_DIR)
	rm -r $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

.DEFAULT_GOAL := all
