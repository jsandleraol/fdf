/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonsandl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 13:22:44 by jonsandl          #+#    #+#             */
/*   Updated: 2019/10/02 16:44:22 by jonsandl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strjoin(char const *s1, char const *s2)
{
	char		*new;
	size_t		x;
	size_t		y;

	if (!s1 || !s2)
		return (NULL);
	x = ft_strlen(s1);
	y = ft_strlen(s2);
	if (!(new = (char*)malloc(sizeof(*new) * (x + y) + 1)))
		return (NULL);
	x = 0;
	y = 0;
	while (s1[x])
		new[y++] = s1[x++];
	y = 0;
	while (s2[y])
		new[x++] = s2[y++];
	new[x] = '\0';
	return (new);
}
