/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonsandl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 11:11:29 by jonsandl          #+#    #+#             */
/*   Updated: 2019/10/01 17:34:47 by jonsandl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnew(size_t size)
{
	int		x;
	char	*str;

	x = 0;
	if (!(str = (char*)malloc(sizeof(char) * size + 1)))
		return (NULL);
	ft_memset(str, '\0', size + 1);
	return (str);
}
