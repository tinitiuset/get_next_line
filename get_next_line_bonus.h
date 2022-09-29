/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvalient <mvalient@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 14:27:11 by mvalient          #+#    #+#             */
/*   Updated: 2022/09/29 14:27:14 by mvalient         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <errno.h>

char	*ft_get_raw_line(int fd, char *extra);
char	*ft_trim_line(char *line);
char	*get_next_line(int fd);
char	*ft_strchr(const char *s, int c);
int		ft_count_until(int n, const char *s);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strdup(char *ntf, const char *s);
char	*ft_substr(char *full, int start, int len);

#endif
