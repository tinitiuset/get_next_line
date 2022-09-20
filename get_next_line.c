/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvalient <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 09:34:13 by mvalient          #+#    #+#             */
/*   Updated: 2022/09/20 10:53:33 by mvalient         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	void	*buf;

	buf = malloc(BUFFER_SIZE + 1);
	read(fd, buf, BUFFER_SIZE);
	ft_buf_0_after_nl(buf);
	return (buf);
}
