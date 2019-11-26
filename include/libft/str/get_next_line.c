/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonsandl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 09:18:18 by jonsandl          #+#    #+#             */
/*   Updated: 2019/11/13 15:52:44 by jonsandl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_gnl(char **str, char **line, int fd, int i)
{
	char		*tmp;
	char		*next;

	if (i == -1)
		return (-1);
	if (!(next = ft_strchr(str[fd], '\n')))
	{
		if (!*str[fd])
			return (0);
		*line = ft_strdup(str[fd]);
		ft_strdel(&str[fd]);
		return (1);
	}
	next++;
	line[0] = ft_strsub(str[fd], 0, next - str[fd] - 1);
	tmp = ft_strdup(str[fd] + (next - str[fd]));
	free(str[fd]);
	str[fd] = ft_strdup(tmp);
	ft_strdel(&tmp);
	return (1);
}

int				get_next_line(int const fd, char **line)
{
	int			i;
	char		buff[BUFF_SIZE + 1];
	static char	*str[MAX_FD];
	char		*tmp;

	if (!line || fd < 0 || fd > MAX_FD)
		return (-1);
	if (str[fd] == NULL)
		str[fd] = ft_strnew(0);
	while ((i = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[i] = '\0';
		tmp = ft_strjoin(str[fd], buff);
		free(str[fd]);
		str[fd] = ft_strdup(tmp);
		ft_strdel(&tmp);
	}
	return (ft_gnl(str, line, fd, i));
}
