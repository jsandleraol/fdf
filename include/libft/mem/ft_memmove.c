/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonsandl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 16:37:36 by jonsandl          #+#    #+#             */
/*   Updated: 2019/09/27 15:38:32 by jonsandl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memmove(void *to, const void *from, size_t len)
{
	unsigned char	*dest;
	unsigned char	*src;
	int				i;

	dest = (unsigned char*)to;
	src = (unsigned char*)from;
	i = -1;
	if (src < dest)
		while ((int)--len >= 0)
			dest[len] = src[len];
	if (src > dest)
		while (++i < (int)len)
			dest[i] = src[i];
	return ((void*)dest);
}
