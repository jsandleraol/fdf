/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonsandl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 14:53:52 by jonsandl          #+#    #+#             */
/*   Updated: 2019/11/26 14:55:59 by jonsandl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void		initialize(t_fdf *fdf)
{
	fdf->coordinate_x = 0;
	fdf->coordinate_y = 0;
	fdf->angle_y = cos(M_PI / 3);
	fdf->angle_x = fdf->angle_y * sin(M_PI / 6);
	fdf->zoom = ceil((fdf->width > fdf->height)) ? (WIN_W / fdf->width) + ZOOM \
		: (WIN_H / fdf->height) + ZOOM;
	fdf->isometric = 1;
}

int			keys(int keycode, t_fdf *fdf)
{
	if (keycode == KEY_ESCAPE)
		exit(0);
	else if (keycode == KEY_ANSI_W || keycode == KEY_UPARROW)
		fdf->coordinate_x -= 1;
	else if (keycode == KEY_ANSI_S || keycode == KEY_DOWNARROW)
		fdf->coordinate_x += 1;
	else if (keycode == KEY_ANSI_D || keycode == KEY_RIGHTARROW)
		fdf->coordinate_y -= 1;
	else if (keycode == KEY_ANSI_A || keycode == KEY_LEFTARROW)
		fdf->coordinate_y += 1;
	else if (keycode == KEY_ANSI_Z)
		fdf->zoom += 1;
	else if ((keycode == KEY_ANSI_X) && (fdf->zoom > MAX_ZOOM))
		fdf->zoom -= 1;
	else if (keycode == KEY_SPACE)
		fdf->angle_x *= (fdf->isometric++ % 2) ? 0.2 : 5;
	return (0);
}

int			main(int ac, char **av)
{
	t_fdf	*fdf;

	if (!(fdf = (t_fdf *)malloc(sizeof(t_fdf))))
		return (0);
	if (ac != 2 || ((fdf->list = valid(av[1], fdf)) == NULL))
	{
		ft_putstr("Usage: fdf fdf_file");
		return (0);
	}
	initialize(fdf);
	fdf->mlx.init = mlx_init();
	fdf->mlx.win = mlx_new_window(fdf->mlx.init, WIN_W, WIN_H, \
	ft_strjoin("fdf - ", av[1]));
	mlx_hook(fdf->mlx.win, 2, 3, keys, fdf);
	mlx_loop_hook(fdf->mlx.init, create_graphic, fdf);
	mlx_loop(fdf->mlx.init);
	return (0);
}
