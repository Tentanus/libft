# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: mweverli <marvin@codam.nl>                   +#+                      #
#                                                    +#+                       #
#    Created: 2021/11/29 13:21:58 by mweverli      #+#    #+#                  #
#    Updated: 2022/08/31 13:39:47 by mweverli      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #
# VARIABLES

NAME		:=	libft.a
OBJ_DIR		:=	./OBJ
SRC_DIR		:=	./src
HEA_DIR		:=	./include

HEADER		:=	-I $(HEA_DIR)

SRC = $(shell ls ./src)
OBJ = $(addprefix $(OBJ_DIR)/,$(SRC:.c=.o))

CC		:=	gcc
CFL		:=	-Wall -Werror -Wextra

# RECIPIES:

all: $(NAME)

$(NAME): $(OBJ)
	@ar rcs $(NAME) $^
	@echo "$(GREEN)$(BOLD)FINISHED COMPILING: $(NAME)$(RESET)"

$(OBJ_DIR):
	@mkdir -p $@

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	@$(CC) $(CFL) -c $< -o $@ $(HEADER)

clean:
	@mkdir -p $(OBJ_DIR)
	@echo "$(RED)$(BOLD)Cleaning Libft$(RESET)"
	@rm -r $(OBJ_DIR)

fclean: clean
	@rm -f $(NAME)

# MISC

force: f
	$(SRC)

f:

re: fclean all

.PHONY: all clean fclean re

.DEFAULT_GOAL := all

BOLD	:= \033[1m
GREEN	:= \033[32;1m
RED		:= \033[31;1m
RESET	:= \033[0m
