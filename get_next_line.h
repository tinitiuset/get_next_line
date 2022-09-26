/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvalient <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 09:35:24 by mvalient          #+#    #+#             */
/*   Updated: 2022/09/26 23:13:39 by mvalient         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <errno.h>

char	*ft_get_raw_line(int fd, char *extra);
char	*ft_trim_line(char *line);
char	*get_next_line(int fd);
char	*ft_strchr(const char *s, int c);
size_t	ft_strlen(const char *str);
int		ft_count_until(int n, const char *s);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strdup(const char *s);

#endif
