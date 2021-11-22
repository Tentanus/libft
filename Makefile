# VAR

CC = gcc
CFL = -Wall -Werror -Wextra
NAME = libft.a

OBJ = $(subst .c,.o, $(SRC))

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
		ft_calloc.c \
		ft_strdup.c \
		\
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_split.c \
		ft_itoa.c \
		ft_strmapi.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \

OBJ_BONUS = $(SRC_BONUS:.c=.o)

SRC_BONUS =	ft_lstnew.c \
			ft_lstadd_front.c \
			ft_lstsize.c \
			ft_lstlast.c \
			ft_lstadd_back.c \
			ft_lstdelone.c \
			ft_lstclear.c \
			ft_lstiter.c \
			ft_lstmap.c

# Make Commands:
all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $^

bonus: $(NAME)($(OBJ_BONUS))
#	ar rcs $(NAME) $(OBJ) $(OBJ_BONUS)

%.o: %.c
	$(CC) $(CFL) -c $^

clean:
	rm $(OBJ) $(NAME)

fclean:
	rm -f $(OBJ) $(NAME)

bclean:
	rm -f $(OBJ) $(OBJ_BONUS) $(NAME)
re: fclean all

clear:
	clear

test: clear $(OBJ) $(NAME)
	$(CC) $(CFL) main.c$(OBJ)
	./a.out
