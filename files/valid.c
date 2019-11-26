/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonsandl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 14:46:29 by jonsandl          #+#    #+#             */
/*   Updated: 2019/11/26 14:49:05 by jonsandl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void		put_pixel(t_fdf *fdf, int y, int x, double uvector)
{
	int		pos;

	if ((y > 0 && x > 0) && (y < WIN_W && x < WIN_H))
	{
		pos = (y * 4) + (x * WIN_W * 4);
		fdf->img.data[pos] = 0x6F + uvector;
	}
}

t_coord		*convert_atoi(t_fdf *fdf, char *line)
{
	t_coord	*coord;
	int		i;
	int		x;

	i = 0;
	x = 0;
	if (!(coord = (t_coord *)ft_memalloc(sizeof(*coord))))
		return (NULL);
	if (!(coord->x_coord = (int*)ft_memalloc(sizeof(int) * fdf->width + 1)))
		return (NULL);
	while (line[i])
	{
		coord->x_coord[x++] = ft_atoi(line + i);
		i++;
		while (line[i] != ' ' && line[i])
			i++;
		while (line[i] == ' ' && line[i])
			i++;
	}
	return (coord);
}

int			count_values(char *line)
{
	int		len;
	char	*tmp_line;
	int		i;

	len = 0;
	i = 0;
	tmp_line = line;
	while (line[i] == ' ')
		i++;
	while (line[i])
	{
		if (ft_isdigit(line[i]))
		{
			len += 1;
			i++;
			while (line[i] != ' ' && line[i])
				i++;
			while (line[i] == ' ' && line[i])
				i++;
		}
		else
			line[i] != '-' ? exit(1) : i++;
	}
	return (len);
}

t_list		*valid(char *file, t_fdf *fdf)
{
	char	*line;
	t_list	*list;
	t_coord *coord;
	int		fd;

	fdf->width = 0;
	list = NULL;
	fd = open(file, O_RDONLY);
	while (get_next_line(fd, &line) > 0)
	{
		if (!line)
			return (NULL);
		if (fdf->width == 0)
			fdf->width = count_values(line);
		if (count_values(line) != fdf->width)
			return (NULL);
		coord = convert_atoi(fdf, line);
		ft_lstadd(&list, ft_lstnew(coord, sizeof(t_coord)));
		free(line);
	}
	close(fd);
	fdf->height = ft_lstcount(list);
	ft_lstrev(&list);
	return (list);
}
