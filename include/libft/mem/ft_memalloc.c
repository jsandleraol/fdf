/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonsandl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 10:54:20 by jonsandl          #+#    #+#             */
/*   Updated: 2019/10/01 17:29:43 by jonsandl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memalloc(size_t size)
{
	int		x;
	void	*d;

	x = 0;
	if (!(d = malloc(size)))
		return (NULL);
	ft_bzero(d, size);
	return (d);
}
