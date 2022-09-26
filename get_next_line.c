/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvalient <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 09:34:13 by mvalient          #+#    #+#             */
/*   Updated: 2022/09/26 12:31:05 by mvalient         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_get_raw_line(int fd)
{
	int			read_result;
	char		*templine;
	static char	*rawline;

	templine = malloc(BUFFER_SIZE + 1);
	if (!templine)
		return (NULL);
	read_result = 1;
	while (!ft_strchr(rawline, '\n') && read_result > 0)
	{
		read_result = read(fd, templine, BUFFER_SIZE);
		if (read_result < 0)
		{
			free (templine);
			return (NULL);
		}
		templine[read_result] = '\0';
		rawline = ft_strjoin(rawline, templine);
	}
	free(templine);
	return (rawline);
}

char	*ft_trim_line(char *line)
{
	int		i;
	char	*trimline;

	if (!line)
		return (NULL);
	if (!*line)
		i = 0;
	else
		i = (int)(ft_strchr(line, '\n') - line) + 1;
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
	void	*line;

	if (fd < 0 || BUFFER_SIZE < 1)
		return (0);
	line = ft_get_raw_line(fd);
	line = ft_trim_line(line);
	return (line);
}
