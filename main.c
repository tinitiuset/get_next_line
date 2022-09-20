/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvalient <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 10:21:09 by mvalient          #+#    #+#             */
/*   Updated: 2022/09/20 10:38:13 by mvalient         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	main(void)
{
	int		fd;
	char	*buf;

	fd = open("file.txt", O_RDONLY);
	buf = malloc(BUFFER_SIZE + 1);
	buf[BUFFER_SIZE + 1] = 0;
	read(fd, buf, BUFFER_SIZE);
	printf("%s", buf);
	return (0);
}
