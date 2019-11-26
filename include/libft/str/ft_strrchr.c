/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonsandl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 16:40:34 by jonsandl          #+#    #+#             */
/*   Updated: 2019/09/23 14:49:49 by jonsandl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *s, int c)
{
	int		x;
	int		y;

	x = 0;
	while (s[x])
		x++;
	y = x;
	if (s[x] == (char)c)
		return ((char*)s + x);
	x--;
	while (s[x] && y > 0)
	{
		if (s[x] == (char)c)
			return ((char*)s + x);
		x--;
		y--;
	}
	return (NULL);
}
