/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junsepar <junsepar@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 17:25:30 by junsepar          #+#    #+#             */
/*   Updated: 2023/02/20 19:34:39 by junsepar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strdup_v2(const char *string, int *start, int *flag)
{
	int		len;
	int		i;
	char	*arr;

	len = ft_strlen((char *)string);
	arr = (char *)malloc(len + 1);
	if (!arr)
		return (NULL);
	i = 0;
	while (string[i] && string[i] != '\n')
	{
		arr[i] = string[i];
		i++;
		*start += 1;
	}
	if (string[i] == '\0')
		*flag = 1;
	if (string[i] == '\n')
	{
		arr[i] = string[i];
		*start += 1;
		i++;
	}
	arr[i] = '\0';
	return (arr);
}

char	*ft_processing(int fd, int *start, int *flag, char **stack)
{
	char	buff[BUFFER_SIZE + 1];
	int		rd_size;
	char	*temp;

	while ((rd_size = read(fd, buff, BUFFER_SIZE)))
	{
		if (rd_size < 0)
			return (NULL);
		buff[rd_size] = '\0';
		temp = ft_strjoin(*stack, buff);
		if (temp)
		{
			free(*stack);
			*stack = temp;
		}
		else
			return (NULL);
		if (ft_strchr(buff, '\n'))
			break ;
	}
	temp = ft_strdup_v2(*stack + *start, &(*start), &(*flag));
	return (temp);
}

char	*ft_check_temp(char **temp, int flag, char **stack)
{
	if (*temp == NULL || flag == 1)
	{
		free(*stack);
		start = 0;
		*stack = NULL;
	}
	if (*temp != NULL && !**temp)
	{
		free(*temp);
		return (NULL);
	}
	return (*temp);
}

char	*get_next_line(int fd)
{
	char		*temp;
	static int	start;
	static char *stack;
	int			flag;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	if (stack == NULL)
	{
		stack = malloc(sizeof(char *) * 1);
		*stack = '\0';
	}
	flag = 0;
	temp = ft_processing(fd, &start, &flag, &stack);
	temp = ft_check_temp(&temp, flag, &stack)
	return (temp);
}
/*
#include <stdio.h>
#include <fcntl.h>
#include <assert.h>

int main()
{
	char *str;
	int fd = open("test.txt", O_RDONLY);
	char *line;
	line = get_next_line(fd);
	printf("%s", line);
	free(line);
	line = get_next_line(fd);
	printf("%s", line);
	free(line);
	line = get_next_line(fd);
	printf("%s", line);
	free(line);
	close(fd);
	fd = open("test1.txt", O_RDONLY);
	line = get_next_line(fd);
	printf("%s", line);
	free(line);
	line = get_next_line(fd);
	printf("%s", line);
	free(line);
	line = get_next_line(fd);
	printf("%s", line);
	free(line);
	close(fd);
	while (1)
	{
		str = get_next_line(4);
		free(str);
		if (!str)
			break ;
	}
	system("leaks a.out");
	return 0;
}*/
