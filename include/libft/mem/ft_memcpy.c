/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonsandl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 15:11:27 by jonsandl          #+#    #+#             */
/*   Updated: 2019/09/23 10:51:13 by jonsandl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memcpy(void *to, const void *from, size_t n)
{
	unsigned char	*tmp;
	unsigned char	*tmp2;
	size_t			i;

	tmp = (unsigned char*)to;
	tmp2 = (unsigned char*)from;
	i = 0;
	if (!n || to == from)
		return (to);
	while (n >= 1)
	{
		tmp[i] = tmp2[i];
		i++;
		n--;
	}
	return ((void*)tmp);
}
