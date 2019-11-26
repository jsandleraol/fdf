/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonsandl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 12:09:19 by jonsandl          #+#    #+#             */
/*   Updated: 2019/10/02 17:10:42 by jonsandl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*x;
	size_t	i;

	i = 0;
	if (f && (x = (char*)malloc(sizeof(char) * ft_strlen(s) + 1)))
	{
		while (s[i])
		{
			x[i] = f(i, s[i]);
			i++;
		}
		x[i] = '\0';
		return (x);
	}
	return (NULL);
}
