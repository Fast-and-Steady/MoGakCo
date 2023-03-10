/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junsepar <junsepar@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 17:25:22 by junsepar          #+#    #+#             */
/*   Updated: 2023/02/20 19:33:55 by junsepar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
/*# include <io.h>*/
# include <fcntl.h>

//utils
int		ft_strlen(char *str);
int		ft_strlen(char *str);
char	*ft_strjoin(const char *s1, char const *s2);
char	*ft_strcat(char *string1, const char *string2);
char	*ft_strchr(const char *string, int c);
//main
char	*ft_strdup_v2(const char *string, int *start, int *flag);
char	*ft_processing(int fd, int *start, int *flag, char **stack);
char	*get_next_line(int fd);


#ifndef BUFFER_SIZE
# define BUFFER_SIZE 2561
#endif


#endif
