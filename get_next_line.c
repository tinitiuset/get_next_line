/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvalient <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 09:34:13 by mvalient          #+#    #+#             */
/*   Updated: 2022/09/26 23:13:00 by mvalient         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

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
			free (templine);
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
	free(line);
	return (trimline);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*extra;

	if (fd < 0 || BUFFER_SIZE < 1)
		return (0);
	line = ft_get_raw_line(fd, extra);
	if (extra)
	{
		extra = ft_strdup(ft_strchr(line, '\n') + 1);
		line = ft_trim_line(line);
	}
	return (line);
}
