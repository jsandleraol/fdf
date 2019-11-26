/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonsandl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 15:54:09 by jonsandl          #+#    #+#             */
/*   Updated: 2019/09/23 14:33:08 by jonsandl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	x;
	size_t	y;
	size_t	i;
	size_t	w;

	x = ft_strlen(src);
	y = ft_strlen(dst);
	i = 0;
	w = y;
	if (dstsize <= 0)
		return (x);
	if (dstsize < y)
		return (dstsize + x);
	while (src[i] && y < dstsize - 1)
		dst[y++] = src[i++];
	dst[y] = '\0';
	return (x + w);
}
