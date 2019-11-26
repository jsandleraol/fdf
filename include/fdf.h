/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonsandl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 14:44:30 by jonsandl          #+#    #+#             */
/*   Updated: 2019/11/26 15:07:45 by jonsandl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

# include "libft/libft.h"
# include "minilibx_macos/mlx.h"
# include "keys.h"
# include <stdio.h>
# include <math.h>
# include <time.h>

# define FDF_MACRO int i; int x; int y;
# define WIN_W	(1280)
# define WIN_H	(720)
# define ZOOM		(2)
# define MAX_X		(10)
# define MAX_ZOOM	(5)

typedef struct		s_coord{
	int				*x_coord;
}					t_coord;

typedef struct		s_image
{
	char			*data;
	int				size;
	int				endian;
	int				bpp;
}					t_image;

typedef struct		s_mlx
{
	void			*init;
	void			*win;
	void			*img;
}					t_mlx;

typedef struct		s_fdf{
	t_list			*list;
	t_mlx			mlx;
	t_image			img;
	int				width;
	int				height;
	int				x;
	int				y;
	int				y0;
	int				x0;
	int				y1;
	int				x1;
	double			angle_y;
	double			angle_x;
	int				zoom;
	int				coordinate_y;
	int				coordinate_x;
	int				isometric;
}					t_fdf;

t_list				*valid(char *file, t_fdf *fdf);
t_coord				*convert_atoi(t_fdf *fdf, char *line);
void				reset(t_fdf *fdf);
int					keys(int keycode, t_fdf *fdf);
int					create_graphic(t_fdf *fdf);
int					count_values(char *line);
void				put_pixel(t_fdf *fdf, int y, int x, double uvector);
void				draw_lines(t_fdf *fdf);
void				connect_line(t_list *list, t_fdf *fdf);

#endif
