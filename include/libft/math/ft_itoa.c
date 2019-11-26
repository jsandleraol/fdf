/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonsandl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 14:19:20 by jonsandl          #+#    #+#             */
/*   Updated: 2019/09/25 13:48:35 by jonsandl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_itoa(int n)
{
	char	*new;
	int		x;
	int		b;
	int		sign;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	x = (n <= 0 ? 1 : 0);
	sign = ((n < 0) ? 1 : 0);
	(n < 0) ? n = -n : 0;
	b = n;
	while (n > 0 && ++x)
		n = n / 10;
	if (!(new = (char*)malloc(sizeof(*new) * x + 1)))
		return (NULL);
	new[x--] = '\0';
	while (b >= 0 && x >= 0)
	{
		new[x--] = (b % 10) + '0';
		b = b / 10;
	}
	(sign == 1) ? new[0] = '-' : 0;
	return (new);
}
