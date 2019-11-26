/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonsandl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 12:14:00 by jonsandl          #+#    #+#             */
/*   Updated: 2019/09/20 15:37:54 by jonsandl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int					ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*tmp;
	unsigned char	*tmp2;
	int				x;

	tmp = (unsigned char*)s1;
	tmp2 = (unsigned char*)s2;
	x = 0;
	if (n == 0)
		return (x);
	while (*tmp == *tmp2 && n > 1)
	{
		tmp++;
		tmp2++;
		n--;
	}
	return (x = (*tmp - *tmp2));
}
