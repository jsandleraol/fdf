/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   counter.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonsandl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/03 15:56:51 by jonsandl          #+#    #+#             */
/*   Updated: 2019/11/05 09:26:16 by jonsandl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		counter(char const *s, char c, size_t y)
{
	size_t	x;
	size_t	i;

	x = 0;
	i = 0;
	if (y == 1)
		while (s[++i])
		{
			if (s[i + 1] != c && s[i])
				x++;
			if (!s)
				return (x);
		}
	while (s[++i])
	{
		while (s[i] != c && s[i])
		{
			if (s[i] != c && s[i + 1] == c)
				x++;
			i++;
		}
	}
	return (x);
}
