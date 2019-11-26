/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonsandl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 16:56:45 by jonsandl          #+#    #+#             */
/*   Updated: 2019/10/01 14:03:45 by jonsandl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *h, const char *n)
{
	int	i;
	int	w;
	int	x;

	i = 0;
	x = 0;
	w = 0;
	if (!(n[i]))
		return ((char*)h);
	while (h[x])
	{
		x = w;
		while (h[x] == n[i] && n[i] && h[x])
		{
			x++;
			i++;
		}
		if (!(n[i]))
			return ((char*)h + w);
		w++;
		i = 0;
	}
	return (NULL);
}
