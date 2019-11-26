/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonsandl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 11:51:10 by jonsandl          #+#    #+#             */
/*   Updated: 2019/10/03 16:21:45 by jonsandl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmap(char const *s, char (*f)(char))
{
	char	*x;
	size_t	i;

	if (f && (x = (char*)malloc(sizeof(*x) * ft_strlen(s) + 1)))
	{
		i = 0;
		while (s[i])
		{
			x[i] = f(s[i]);
			i++;
		}
		x[i] = '\0';
		return (x);
	}
	return (NULL);
}
