/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonsandl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 11:46:16 by jonsandl          #+#    #+#             */
/*   Updated: 2019/10/01 16:33:28 by jonsandl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memset(void *ptr, int x, size_t n)
{
	unsigned char	*tmp;

	tmp = (unsigned char*)ptr;
	while (n)
	{
		*tmp++ = (unsigned char)x;
		n--;
	}
	return (ptr);
}
