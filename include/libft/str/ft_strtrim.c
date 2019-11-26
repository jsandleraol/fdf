/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonsandl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 13:32:49 by jonsandl          #+#    #+#             */
/*   Updated: 2019/10/02 16:51:41 by jonsandl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strtrim(char const *s)
{
	char		*new;
	size_t		i;
	size_t		w;
	size_t		e;

	i = 0;
	e = 0;
	if (!s)
		return (NULL);
	w = ft_strlen(s);
	while (s[i] && (s[i] == ' ' || s[i] == '\n' || s[i] == '\t'))
		i++;
	while ((s[w - 1] == ' ' || s[w - 1] == '\n' || s[w - 1] == '\t') && (s[i]))
		w--;
	if (!(new = (char*)malloc(sizeof(*new) * (w - i) + 1)))
		return (NULL);
	w = w - i;
	while (s[i] && w > 0)
	{
		new[e++] = s[i++];
		w--;
	}
	new[e] = '\0';
	return (new);
}
