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

//	MACROS / DEFINES

//	STRUCTURES
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}			t_list;

//	FUNCTIONS:
//		Functions:	ASCII

/** @brief 
 *  checks if c is alphanumeric on the ASCII table:
 * 
 *  @param c		Character to be checked.
 *
 *  @return int		True if c is alphanumeric, false if not.
 **/
int			ft_isalnum(int c);
int			ft_isalpha(int c);
int			ft_isascii(int c);
int			ft_isdigit(int c);
int			ft_ishex(int c);
int			ft_islower(int c);
int			ft_ispath(int c);
int			ft_isprint(int c);
int			ft_isspace(int c);
int			ft_isupper(int c);
int			ft_isvisible(const int c);

//		Functions:	CONVERT

int32_t		ft_atoi(const char *str);
long		ft_atol(const char *str);
int			ft_htoi(const char *str);
char		*ft_itoa(int n);
char		*ft_itoh(unsigned long n);
int			ft_toupper(int c);
int			ft_tolower(int c);

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
size_t		ft_strfindis(const char *str, int (*is_f)(int));
int			ft_stris(const char *str, int (*is_f)(int));
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
