/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonsandl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/03 15:57:06 by jonsandl          #+#    #+#             */
/*   Updated: 2019/10/03 16:19:47 by jonsandl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long		ft_atol(const char *str)
{
	long	x;
	int		sign;
	long	i;

	x = 0;
	sign = 1;
	i = 0;
	if (str[i])
	{
		while (str[i] == ' ' || str[i] == '\t' || (str[i] >= 9 && str[i] <= 13))
			i++;
		if (str[i] == '+' && (str[i + 1] >= '0' && str[i + 1] <= '9'))
			i++;
		if (str[i] == '-' && (str[i + 1] >= '0' && str[i + 1] <= '9'))
		{
			sign = -1;
			i++;
		}
		while (str[i] >= '0' && str[i] <= '9')
		{
			x = x * 10 + (str[i] - '0');
			i++;
		}
	}
	return (sign * x);
}
