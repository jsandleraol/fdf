/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonsandl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 14:27:26 by jonsandl          #+#    #+#             */
/*   Updated: 2019/09/17 15:53:36 by jonsandl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *restrict s1, const char *restrict s2, size_t n)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (s1[x])
		x++;
	while (s2[y] && n > 0)
	{
		s1[x++] = s2[y++];
		n--;
	}
	s1[x] = '\0';
	return (s1);
}
