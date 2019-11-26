/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonsandl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 14:45:56 by jonsandl          #+#    #+#             */
/*   Updated: 2019/11/26 15:15:47 by jonsandl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void		draw_lines(t_fdf *fdf)
{
	double	y;
	double	x;
	double	delta_y;
	double	delta_x;
	double	uvector;

	y = fdf->y0;
	x = fdf->x0;
	delta_y = fdf->y1 - fdf->y0;
	delta_x = fdf->x1 - fdf->x0;
	uvector = sqrt((pow(delta_y, 2)) + (pow(delta_x, 2)));
	delta_y /= uvector;
	delta_x /= uvector;
	while (uvector > 0)
	{
		put_pixel(fdf, y, x, uvector);
		y += delta_y;
		x += delta_x;
		uvector -= 1;
	}
}

void		draw_horizontal(t_fdf *fdf, int x, int x2)
{
	int		yt;
	int		xt;

	yt = fdf->y - fdf->width / 2;
	xt = fdf->x - fdf->height / 2;
	fdf->y0 = fdf->angle_y * (yt - xt) * fdf->zoom;
	fdf->x0 = fdf->angle_x * (yt + xt) * fdf->zoom;
	fdf->x0 -= x;
	fdf->y1 = fdf->angle_y * ((yt + 1) - xt) * fdf->zoom;
	fdf->x1 = fdf->angle_x * ((yt + 1) + xt) * fdf->zoom;
	fdf->x1 -= x2;
	fdf->y0 += (WIN_W / 2) + fdf->coordinate_y;
	fdf->y1 += (WIN_W / 2) + fdf->coordinate_y;
	fdf->x0 += (WIN_H / 2) + fdf->coordinate_x;
	fdf->x1 += (WIN_H / 2) + fdf->coordinate_x;
	draw_lines(fdf);
}

void		draw_vertical(t_fdf *fdf, int x, int x2)
{
	int		yt;
	int		xt;

	yt = fdf->y - fdf->width / 2;
	xt = fdf->x - fdf->height / 2;
	fdf->y0 = fdf->angle_y * (yt - xt) * fdf->zoom;
	fdf->x0 = fdf->angle_x * (yt + xt) * fdf->zoom;
	fdf->x0 -= x;
	fdf->y1 = fdf->angle_y * (yt - (xt + 1)) * fdf->zoom;
	fdf->x1 = fdf->angle_x * (yt + (xt + 1)) * fdf->zoom;
	fdf->x1 -= x2;
	fdf->y0 += (WIN_W / 2) + fdf->coordinate_y;
	fdf->y1 += (WIN_W / 2) + fdf->coordinate_y;
	fdf->x0 += (WIN_H / 2) + fdf->coordinate_x;
	fdf->x1 += (WIN_H / 2) + fdf->coordinate_x;
	draw_lines(fdf);
}

void		connect_line(t_list *list, t_fdf *fdf)
{
	t_coord	*str;
	t_coord	*str2;

	fdf->x = 0;
	while (fdf->x < fdf->height)
	{
		fdf->y = 0;
		str = (t_coord*)(list->content);
		if (list->next == NULL)
			str2 = (t_coord*)(fdf->list->content);
		else
			str2 = (t_coord*)(list->next->content);
		while (fdf->y < fdf->width)
		{
			if (fdf->y < fdf->width - 1)
				draw_horizontal(fdf, str->x_coord[fdf->y], \
						str->x_coord[fdf->y + 1]);
			if (fdf->x < fdf->height - 1)
				draw_vertical(fdf, str->x_coord[fdf->y], str2->x_coord[fdf->y]);
			fdf->y++;
		}
		list = list->next;
		fdf->x++;
	}
}

int			create_graphic(t_fdf *fdf)
{
	fdf->mlx.img = mlx_new_image(fdf->mlx.init, WIN_W, WIN_H);
	fdf->img.data = mlx_get_data_addr(fdf->mlx.img, &fdf->img.bpp, \
		&fdf->img.size, &fdf->img.endian);
	connect_line(fdf->list, fdf);
	mlx_put_image_to_window(fdf->mlx.init, fdf->mlx.win, fdf->mlx.img, 0, 0);
	mlx_destroy_image(fdf->mlx.init, fdf->mlx.img);
	return (0);
}
