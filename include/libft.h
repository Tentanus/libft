/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libft.h                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: mweverli <mweverli@codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/13 11:33:31 by mweverli      #+#    #+#                 */
/*   Updated: 2023/03/31 17:49:33 by mweverli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <errno.h>
# include <limits.h>
# include <stdlib.h>
# include <unistd.h>
# include <stddef.h>

//	MACROS

//	STRUCTURES
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}			t_list;

//	FUNCTIONS:
//		Functions:	ASCII

/** @brief
 *  Checks if c is alphanumeric character on the ASCII table:
 *
 *  @param c		Character to be checked.
 *  @return int		True if c is alphanumeric character, false if not.
 **/
int			ft_isalnum(int c);
/** @brief
 *  Checks if c is alphabetic character on the ASCII table:
 *
 *  @param c		Character to be checked.
 *  @return int		True if c is alphabetic character, false if not.
 **/
int			ft_isalpha(int c);
/** @brief
 *  Checks if c is a character on the ASCII table:
 *
 *  @param c		Character to be checked.
 *  @return int		True if c on the ASCII table, false if not.
 **/
int			ft_isascii(int c);
/** @brief
 *  Checks if c is a digit character on the ASCII table:
 *
 *  @param c		Character to be checked.
 *  @return int		True if c is a digit character, false if not.
 **/
int			ft_isdigit(int c);
/** @brief
 *  Checks if c is a hexadecimal character on the ASCII table:
 *
 *  @param c		Character to be checked.
 *  @return int		True if c is a hexadecimal character, false if not.
 **/
int			ft_ishex(int c);
/** @brief
 *  Checks if c is a path character on the ASCII table:
 *  @warning This is a non-POSIX compliant set.
 *
 *  @param c		Character to be checked.
 *  @return int		True if c is a path character, false if not.
 **/
int			ft_ispath(int c);
/** @brief
 *  Checks if c is a printable character on the ASCII table:
 *
 *  @param c		Character to be checked.
 *  @return int		True if c is a printable character, false if not.
 **/
int			ft_isprint(int c);
/** @brief
 *  Checks if c is a whitespace character on the ASCII table:
 *
 *  @param c		Character to be checked.
 *  @return int		True if c is a whitespace character, false if not.
 **/
int			ft_isspace(int c);
/** @brief
 *  Checks if c is a uppercase character on the ASCII table:
 *
 *  @param c		Character to be checked.
 *  @return int		True if c is a uppercase character, false if not.
 **/
int			ft_isupper(int c);

//		Functions:	CONVERT

/**
 *  @brief
 *  Will take in a char*, skip whitespace, take in '-' or '+' and only
 *  interpret numbers (ft_isdigit).
 *
 *  @warning Segfaults when given NULL.
 *  @param str 
 *  @return int32_t or 0 if non INT value;
 */
int32_t		ft_atoi(const char *str);
/**
 *  @brief
 *  Will take in a char*, skip whitespace, take in '-' or '+' and only
 *  interpret numbers (ft_isdigit).
 *
 *  @warning Segfaults when given NULL.
 *  @param str
 *  @return long or 0 if non INT value;
 */
long		ft_atol(const char *str);
/**
 *  @brief
 *  Will take in a char*, skip whitespace, take in '-' or '+',
 *  skip '0x' or '0X' and only interpret hexadecimal (ft_ishex).
 *
 *  @warning Segfaults when given NULL.
 *  @param str
 *  @return long or 0 if non INT value;
 */
int32_t		ft_htoi(const char *str);
/**
 *  @brief
 *  Will take in an integer, allocate memory and return a string
 *  containing the decimal number.
 *
 *  @warning Allocates Memory, is to be freed.
 *  @param n
 *  @return char* or NULL if an error occured.
 */
char		*ft_itoa(int32_t n);
/**
 *  @brief
 *  Will take in an unsigned long, allocate memory and return a string
 *  containing the hexadecimal number.
 *
 *  @warning Allocates Memory, is to be freed.
 *  @param n
 *  @return char* or NULL if an error occured.
 */
char		*ft_itoh(unsigned long n);
/**
 *  @brief
 *  Will take in a char and if possible return the lowercase counterpart.
 *
 *  @param c
 *  @return int
 */
int			ft_tolower(int c);
/**
 *  @brief
 *  Will take in a char and if possible return the uppercase counterpart.
 *
 *  @param c
 *  @return int
 */
int			ft_toupper(int c);

//		Functions:	LIST

void		ft_lstadd_back(t_list **lst, t_list *new);
void		ft_lstadd_front(t_list **lst, t_list *new);
void		ft_lstclear(t_list **lst, void (*del)(void *));
void		ft_lstdelone(t_list *lst, void (*del)(void *));
void		ft_lstiter(t_list *lst, void (*f)(void *));
t_list		*ft_lstlast(t_list *lst);
t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
t_list		*ft_lstnew(void *content);
int			ft_lstsize(t_list *lst);

//		Functions:	MATH

int			ft_abs(int a);
int			ft_ternary(int bol, int t, int f);

//		Functions:	MEMORY

void		ft_bzero(void *s, size_t n);
void		*ft_calloc(size_t nitems, size_t size);
void		*ft_memchr(const void *s, int c, size_t n);
int			ft_memcmp(const void *s1, const void *s2, size_t n);
void		*ft_memcpy(void *dst, const void *src, size_t n);
void		*ft_memmove(void *dst, const void *src, size_t n);
void		*ft_memset(void *b, int c, size_t len);

//		Functions:	PRINT

int			ft_printf(const char *str, ...);

//		Functions:	PUT

void		ft_putchar_fd(const char c, int fd);
void		ft_putendl_fd(const char *s, int fd);
void		ft_putnbr_fd(const int n, int fd);
void		ft_putstr_fd(const char *s, int fd);

//		Functions:	STRING

char		**ft_split(char const *s, char c);
void		ft_split_free(char **arr);

char		*ft_strchr(const char *s, int c);
char		*ft_strdup(const char *src);
int			ft_stris(char *str, int (*is_f)(int));
void		ft_striteri(char *s, void (*f)(unsigned int, char*));
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strjoin_fs1(char *s1, char const *s2);
size_t		ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t		ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t		ft_strlen(const char *str);
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int			ft_strncmp(const char *s1, const char *s2, size_t n);
char		*ft_strnstr(const char *hst, const char *ndl, size_t len);
char		*ft_strrchr(const char *s, int c);
char		*ft_strsubset(const char *str, const char *set);
size_t		ft_strskipchar(const char *str, const char c);
size_t		ft_strskipis(const char *str, int (*is_f)(int));
char		*ft_strskipset(const char *str, const char *set);
char		*ft_strtrim(char const *s1, char const *set);
char		*ft_substr(const char *src, unsigned int start, size_t len);

#endif
