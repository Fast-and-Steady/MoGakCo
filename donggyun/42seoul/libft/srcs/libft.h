#ifndef LIBFT_H
# define LIBFT_H

#include <string.h>
#include <stdlib.h>
#include <limits.h>

#include <unistd.h>

typedef struct s_list
{
	void	*content;
	struct	s_list *next;

} t_list;


// memory
void	*ft_memset(void* ptr, int value, size_t num);
void	ft_bzero(void *ptr, size_t num);
void	*ft_memcpy(void* dest, const void* source, size_t num);
void	*ft_memmove(void* dest, const void* source, size_t num);
void	*ft_memchr(const void *, int, size_t);
int		ft_memcmp(const void *buf1, const void *buf2, size_t count);
void	*ft_calloc(size_t count, size_t size);

//void	*ft_memccpy(void *dest, const void *source, int c, size_t num);
//char	*ft_strstr(const char *string1, const char *string2);
//int	ft_strcmp(char *s1, char *s2);
//int	ft_strequ(char const *s1, char const *s2);
//int	ft_strnequ(char const *s1, char const *s2, size_t n);
//char	*ft_strncpy(char *dest, const char *src, size_t n);
//char	*ft_strcpy(char *string1, const char *string2);
//char	*ft_strcat(char *string1, const char *string2);
//char	*strncat(char *string1, const char *string2, size_t count);
//char	*ft_strmap(char const *s, char (*f)(char));
//void	ft_striter(char *s, void (*f)(char *));
//void	ft_lstdel(t_list **alst, void (*del)(void *, size_t));
//void	ft_mylstdel(t_list **alst, void (*del)(void **));
//void	ft_lstadd(t_list **lst, t_list *new);
//void	*ft_memalloc(size_t size);
//void	ft_memdel(void **ptr);
//char	*ft_strnew(size_t size);
//void	ft_strdel(char **as);
//void	ft_strclr(char *s);
//void	ft_del(void *content, size_t content_size);

// string
int		ft_strlen(char *str);
char	*ft_strnstr(const char *string1, const char *string2, size_t n);
char	*ft_strdup(const char *string);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
char	**ft_split(char const *s, char c);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strchr(const char *string, int c);
char	*ft_strrchr(const char *string, int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);


// usefull
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);

// fuction pointer
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

// a<->i
int		ft_atoi(const char *str);
char	*ft_itoa(int n);

//print
void	ft_putstr_fd(char const *s, int fd);
void	ft_putendl_fd(char const *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putchar_fd(char c, int fd);

// list
t_list	*ft_lstnew(void *content);
void	ft_lstdelone(t_list *lst, void (*del)(void*));
void	ft_lstiter(t_list *lst, void (*f)(void *));
void	ft_lstclear(t_list **lst, void (*del)(void *));
t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
#endif
