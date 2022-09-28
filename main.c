/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvalient <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 10:21:09 by mvalient          #+#    #+#             */
/*   Updated: 2022/09/20 10:44:11 by mvalient         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	main(void)
{
	int		fd;
	char	*print;

	fd = open("file.txt", O_RDWR);
	print = get_next_line(fd);
	printf("%s|", print);
	free(print);
	print = get_next_line(fd);
	printf("%s|", print);
	free(print);
	return (0);
}
