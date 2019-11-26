/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonsandl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 17:03:14 by jonsandl          #+#    #+#             */
/*   Updated: 2019/10/02 11:11:57 by jonsandl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *h, const char *n, size_t len)
{
	size_t	i;
	size_t	x;

	x = 0;
	if (ft_strlen(n) == 0)
		return ((char*)h);
	while (h[x] && len > 0)
	{
		i = 0;
		while (n[i] == h[i + x] && i + x < len)
		{
			i++;
			if (i == ft_strlen(n))
				return ((char*)h + x);
		}
		x++;
	}
	return (NULL);
}
