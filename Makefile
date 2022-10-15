# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: mweverli <mweverli@codam.nl>                 +#+                      #
#                                                    +#+                       #
#    Created: 2021/11/29 13:21:58 by mweverli      #+#    #+#                  #
#    Updated: 2022/10/10 17:58:27 by mweverli      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

#========================================#
#=========  GENERAL VARIABLES:  =========#
#========================================#

NAME		:=	libft.a
NAME_BASE	:=	$(basename $(NAME))
SRC_DIR		:=	./src
OBJ_DIR		:=	./obj
INC_DIR		:=	./include

HEADER		:=	-I $(INC_DIR)

#=========  SOURCE  VARIABLES:  =========#

SRC_DIR_ASC		:=	/ascii
SRC_ASC			:=	ft_isalnum.c \
					ft_isalpha.c \
					ft_isascii.c \
					ft_isdigit.c \
					ft_ishex.c \
					ft_isprint.c \
					ft_isspace.c

SRC_DIR_CON		:=	/convert
SRC_CON			:=	ft_atoi.c \
					ft_atol.c \
					ft_htoi.c \
					ft_itoa.c \
					ft_tolower.c \
					ft_toupper.c

SRC_DIR_LST		:=	/list
SRC_LST			:=	ft_lstadd_back.c \
					ft_lstclear.c \
					ft_lstiter.c \
					ft_lstmap.c  \
					ft_lstsize.c \
					ft_lstadd_front.c \
					ft_lstdelone.c \
					ft_lstlast.c \
					ft_lstnew.c

SRC_DIR_MAT		:=	/math
SRC_MAT			:=	ft_abs.c \
					ft_ternary.c

SRC_DIR_MEM		:=	/mem
SRC_MEM			:=	ft_bzero.c \
					ft_calloc.c \
					ft_memchr.c \
					ft_memcmp.c \
					ft_memcpy.c \
					ft_memmove.c \
					ft_memset.c

SRC_DIR_PRINT	:=	/printf
SRC_PRINT		:=	ft_printf.c \
					ft_printf_bin.c \
					ft_printf_dec.c \
					ft_printf_hex.c \
					ft_printf_mis.c \
					ft_printf_str.c \
					ft_printf_utils.c 

SRC_DIR_PUT		:=	/put
SRC_PUT			:=	ft_putchar_fd.c \
					ft_putendl_fd.c \
					ft_putnbr_fd.c \
					ft_putstr_fd.c

SRC_DIR_STR	:=	/string
SRC_STR		:=	ft_split.c \
				ft_strchr.c \
				ft_strdup.c \
				ft_stris.c \
				ft_striteri.c \
				ft_strjoin.c \
				ft_strjoin_fs1.c \
				ft_strlcat.c \
				ft_strlcpy.c \
				ft_strlen.c \
				ft_strmapi.c \
				ft_strncmp.c \
				ft_strnstr.c \
				ft_strrchr.c \
				ft_strtrim.c \
				ft_substr.c

SRC_DIR_DIR		:=	$(addprefix $(SRC_DIR_ASC)/,$(SRC_ASC)) \
					$(addprefix $(SRC_DIR_CON)/,$(SRC_CON)) \
					$(addprefix $(SRC_DIR_LST)/,$(SRC_LST)) \
					$(addprefix $(SRC_DIR_MAT)/,$(SRC_MAT)) \
					$(addprefix $(SRC_DIR_MEM)/,$(SRC_MEM)) \
					$(addprefix $(SRC_DIR_PRINT)/,$(SRC_PRINT)) \
					$(addprefix $(SRC_DIR_PUT)/,$(SRC_PUT)) \
					$(addprefix $(SRC_DIR_STR)/,$(SRC_STR))

SRC				:=	$(addprefix $(SRC_DIR)/,$(SRC_DIR_DIR))

OBJ				:=	$(addprefix $(OBJ_DIR)/,$(notdir $(SRC:.c=.o)))

#========================================#
#=========      UTENSILS:       =========#
#========================================#

RM			:=	rm -f

CC			:=	gcc
ifdef DEBUG
CFL			:=	-Wall -Werror -Wextra -g
else
CFL			:=	-Wall -Werror -Wextra
endif

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
	@echo "$(RED)$(BOLD)========== Cleaning $(NAME_BASE) ==========$(RESET)"
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
