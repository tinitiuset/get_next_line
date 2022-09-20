/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvalient <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 09:34:13 by mvalient          #+#    #+#             */
/*   Updated: 2022/09/20 18:52:07 by mvalient         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	int		i;
	void	*buf;

	buf = 0;
	i = 1;
	while (!ft_buf_0_after_nl(buf))
	{
		buf = ft_alloc_read(fd, buf, i);
		i++;
	}
	return (buf);
}
