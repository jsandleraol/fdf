/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonsandl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 12:39:55 by jonsandl          #+#    #+#             */
/*   Updated: 2019/09/20 17:16:24 by jonsandl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *s1)
{
	int		x;
	int		y;
	char	*s2;

	x = 0;
	while (s1[x])
		x++;
	if (!(s2 = (char *)malloc(sizeof(*s2) * x + 1)))
		return (NULL);
	x = 0;
	y = x;
	while (s1[x])
		s2[y++] = s1[x++];
	s2[y] = '\0';
	return (s2);
}
