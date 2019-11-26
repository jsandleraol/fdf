/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonsandl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 12:55:42 by jonsandl          #+#    #+#             */
/*   Updated: 2019/09/20 16:25:02 by jonsandl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (src[y] && len > 0)
	{
		dst[x++] = src[y++];
		len--;
	}
	while (len > 0)
	{
		dst[x++] = '\0';
		len--;
	}
	x = 0;
	return (dst);
}
