# VAR

CC = gcc
CFL = -Wall -Werror -Wextra
NAME = libft.a

OSRC = $(subst .c,.o, $(SRC))

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
#		ft_ \

# Make Commands:

all: $(NAME)

$(NAME): $(OSRC)
	ar rcs $(NAME) $(OSRC)

%.o: %.c
	$(CC) $(CFL) -c $^

clean:
	rm $(OSRC) $(NAME)

fclean:
	rm -f $(OSRC) $(NAME) a.out

re: fclean all

clear:
	clear

test: clear $(OSRC) $(NAME)
	$(CC) $(CFL) main.c$(OSRC)
	./a.out
