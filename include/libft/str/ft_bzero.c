/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonsandl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 15:12:04 by jonsandl          #+#    #+#             */
/*   Updated: 2019/09/20 10:31:45 by jonsandl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_bzero(void *ptr, size_t n)
{
	unsigned char	*tmp;

	tmp = (unsigned char*)ptr;
	while (n >= 1)
	{
		*tmp++ = 0;
		n--;
	}
	return ((void*)tmp);
}
