/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonsandl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/03 15:57:36 by jonsandl          #+#    #+#             */
/*   Updated: 2019/10/03 15:57:39 by jonsandl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrev(char *str)
{
	size_t	x;
	size_t	i;
	char	*new;

	i = 0;
	if (!str || !(new = (char*)malloc(sizeof(*new) * ft_strlen(str) + 1)))
		return (NULL);
	x = ft_strlen(str);
	while (x > 0)
		new[i++] = str[x--];
	new[i] = str[x];
	return (new);
}
