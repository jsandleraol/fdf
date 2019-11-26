/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonsandl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 13:02:02 by jonsandl          #+#    #+#             */
/*   Updated: 2019/10/02 16:51:16 by jonsandl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char		*x;
	size_t		i;
	size_t		y;

	i = 0;
	y = 0;
	if (!(x = (char*)malloc(sizeof(*x) * (len + 1))))
		return (NULL);
	if (s)
	{
		while (i < len)
		{
			x[i] = s[start + i];
			i++;
		}
		x[i] = '\0';
		return (x);
	}
	return (NULL);
}
