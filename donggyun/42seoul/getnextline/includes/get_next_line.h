#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <io.h>
# include <fcntl.h>

//utils
int		ft_strmylen(const char *str);
int		ft_strlen(char *str);
char	*ft_strjoin(const char *s1, char const *s2);
char	*ft_strcat(char *string1, const char *string2);
char	*ft_strchr(const char *string, int c);
//main
char	*ft_strdup_v2(const char *string, int *start, int *flag);
char	*ft_processing(int fd, int *start, int *flag, char **stack);
char	*get_next_line(int fd);


#ifndef BUFFER_SIZE
# define BUFFER_SIZE 100000
#endif

# define EOF 1

#endif