/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonsandl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 11:06:42 by jonsandl          #+#    #+#             */
/*   Updated: 2019/09/20 14:12:44 by jonsandl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memccpy(void *to, const void *from, int c, size_t n)
{
	unsigned char	*tmp;
	unsigned char	*tmp2;
	unsigned char	x;
	int				y;
	int				i;

	tmp = (unsigned char*)to;
	tmp2 = (unsigned char*)from;
	x = (unsigned char)c;
	y = 0;
	i = 0;
	while (n >= 1)
	{
		if (tmp2[i] == x)
		{
			tmp[y++] = tmp2[i++];
			return ((void*)tmp + y);
		}
		tmp[y++] = tmp2[i++];
		n--;
	}
	return (NULL);
}
