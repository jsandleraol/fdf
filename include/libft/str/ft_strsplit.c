/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonsandl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 14:16:56 by jonsandl          #+#    #+#             */
/*   Updated: 2019/11/05 09:27:01 by jonsandl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		**ft_strsplit(char const *s, char c)
{
	size_t	x;
	size_t	i;
	char	**new;
	size_t	j;

	x = 0;
	if (!s || !(new = (char**)malloc(sizeof(*new) * counter(s, c, 0) + 1)))
		return (NULL);
	while (s[x] == c)
		x++;
	j = 0;
	while (s[x])
	{
		if (!(new[j] = (char*)malloc(sizeof(char) * counter(s + x, c, 1) + 1)))
			return (NULL);
		i = 0;
		while (s[x] != c && s[x])
			new[j][i++] = s[x++];
		new[j][i] = '\0';
		while (s[x] == c)
			x++;
		j++;
	}
	new[j] = NULL;
	return (new);
}
