/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvalient <mvalient@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 14:27:36 by mvalient          #+#    #+#             */
/*   Updated: 2022/09/29 14:27:42 by mvalient         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_get_raw_line(int fd, char *extra)
{
	int		read_result;
	char	*templine;

	templine = malloc(BUFFER_SIZE + 1);
	if (!templine)
		return (NULL);
	read_result = 1;
	while (!ft_strchr(extra, '\n') && read_result > 0)
	{
		read_result = read(fd, templine, BUFFER_SIZE);
		if (read_result < 0)
		{
			free(templine);
			return (NULL);
		}
		templine[read_result] = '\0';
		extra = ft_strjoin(extra, templine);
	}
	free(templine);
	return (extra);
}

char	*ft_trim_line(char *line)
{
	int		i;
	char	*trimline;

	if (!line)
		return (NULL);
	if (!*line)
		return (NULL);
	else
		i = ft_count_until('\n', line) + 1;
	trimline = malloc(i + 1);
	if (!trimline)
		return (NULL);
	trimline[i] = '\0';
	while (--i > -1)
		trimline[i] = line[i];
	return (trimline);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*extra[1024];

	if (fd < 0 || BUFFER_SIZE < 1)
		return (0);
	extra[fd] = ft_get_raw_line(fd, extra[fd]);
	line = ft_trim_line(extra[fd]);
	extra[fd] = ft_strdup(extra[fd], ft_strchr(extra[fd], '\n') + 1);
	return (line);
}
