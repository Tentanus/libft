# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: mweverli <marvin@codam.nl>                   +#+                      #
#                                                    +#+                       #
#    Created: 2021/11/29 13:21:58 by mweverli      #+#    #+#                  #
#    Updated: 2022/09/26 15:52:50 by mweverli      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

#========================================#
#=========  GENERAL VARIABLES:  =========#
#========================================#

NAME		:=	libft.a
OBJ_DIR		:=	obj
SRC_DIR		:=	src
INC_DIR		:=	include

HEADER		:=	-I $(INC_DIR)

#=========  SOURCE  VARIABLES:  =========#

SRC_ASC		:=	ascii/ft_isalnum.c \
				ascii/ft_isalpha.c \
				ascii/ft_isascii.c \
				ascii/ft_isdigit.c \
				ascii/ft_ishex.c \
				ascii/ft_isprint.c

SRC_CON		:=	convert/ft_atoi.c \
				convert/ft_htoi.c \
				convert/ft_itoa.c \
				convert/ft_tolower.c \
				convert/ft_toupper.c

SRC_LST		:=	list/ft_lstadd_back.c \
				list/ft_lstclear.c \
				list/ft_lstiter.c \
				list/ft_lstmap.c  \
				list/ft_lstsize.c \
				list/ft_lstadd_front.c \
				list/ft_lstdelone.c \
				list/ft_lstlast.c \
				list/ft_lstnew.c

SRC_MAT		:=	math/ft_abs.c \
				math/ft_ternary.c

SRC_MEM		:=	mem/ft_bzero.c \
				mem/ft_calloc.c \
				mem/ft_memchr.c \
				mem/ft_memcmp.c \
				mem/ft_memcpy.c \
				mem/ft_memmove.c \
				mem/ft_memset.c

SRC_PUT		:=	put/ft_putchar_fd.c \
				put/ft_putendl_fd.c \
				put/ft_putnbr_fd.c \
				put/ft_putstr_fd.c

SRC_STR		:=	string/ft_split.c \
				string/ft_strdup.c \
				string/ft_strjoin.c \
				string/ft_strlcat.c \
				string/ft_strlen.c \
				string/ft_strncmp.c \
				string/ft_strrchr.c \
				string/ft_substr.c \
				string/ft_strchr.c \
				string/ft_striteri.c \
				string/ft_strjoin_fs1.c \
				string/ft_strlcpy.c \
				string/ft_strmapi.c \
				string/ft_strnstr.c \
				string/ft_strtrim.c

SRC_DIR_DIR	:=	$(SRC_ASC) \
				$(SRC_CON) \
				$(SRC_LST) \
				$(SRC_MAT) \
				$(SRC_MEM) \
				$(SRC_PUT) \
				$(SRC_STR)

SRC			:=	$(addprefix $(SRC_DIR)/,$(SRC_DIR_DIR))

OBJ			:=	$(addprefix $(OBJ_DIR)/,$(notdir $(SRC:.c=.o)))

#========================================#
#=========      UTENSILS:       =========#
#========================================#

RM			:=	rm -f

CC			:=	gcc
CFL			:=	-Wall -Werror -Wextra

#========================================#
#=========      RECIPIES:       =========#
#========================================#

all: $(NAME)

$(NAME): $(OBJ)
	@ar rcs $(NAME) $^
	@echo "$(GREEN)$(BOLD)========= $(NAME) COMPILED =========$(RESET)"

$(OBJ_DIR):
	@mkdir -p $@

$(OBJ_DIR)/%.o: $(SRC_DIR)/*/%.c | $(OBJ_DIR)
	@$(CC) $(CFL) -c $< -o $@ $(HEADER)

clean:
	@mkdir -p $(OBJ_DIR)
	@echo "$(RED)$(BOLD)========== Cleaning Libft ==========$(RESET)"
	@$(RM) -r $(OBJ_DIR)

fclean: clean
	@rm -f $(NAME)

re: fclean all

#========================================#
#=========    MISCELLANEOUS:    =========#
#========================================#

.PHONY: all clean fclean re

.DEFAULT_GOAL := all

BOLD	:= \033[1m
GREEN	:= \033[32;1m
RED		:= \033[31;1m
RESET	:= \033[0m
