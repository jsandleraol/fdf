/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonsandl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 10:39:34 by jonsandl          #+#    #+#             */
/*   Updated: 2019/10/03 16:20:20 by jonsandl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*tmp;
	unsigned char	x;
	size_t			i;

	x = (unsigned char)c;
	tmp = (unsigned char*)s;
	i = -1;
	while (++i < n)
		if (tmp[i] == x)
			return (&tmp[i]);
	return (NULL);
}
