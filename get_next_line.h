/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvalient <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 09:35:24 by mvalient          #+#    #+#             */
/*   Updated: 2022/09/20 19:12:52 by mvalient         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <libc.h>
# include <stddef.h>
# include <stdio.h>

char	*get_next_line(int fd);
int		ft_buf_0_after_nl(char *buf);
char	*ft_alloc_read(int fd, char *buf, int index);

#endif
