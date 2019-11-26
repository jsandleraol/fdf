/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdtrim.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonsandl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 17:52:13 by jonsandl          #+#    #+#             */
/*   Updated: 2019/11/05 09:22:41 by jonsandl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdtrim(char const *s, int c)
{
	int		i;
	int		e;
	char	*new;

	i = 0;
	e = 0;
	if (!s)
		return (NULL);
	while (s[i] && s[i] != c)
		i++;
	if (!(new = (char*)ft_memalloc(sizeof(*new) * i + 1)))
		return (NULL);
	i = 0;
	while (s[i] != c && s[i])
		new[e++] = s[i++];
	return (new);
}
