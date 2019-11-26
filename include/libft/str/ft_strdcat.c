/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/06 17:42:38 by ybarbier          #+#    #+#             */
/*   Updated: 2019/11/05 09:24:31 by jonsandl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdcat(char *dest, char *src)
{
	char	*tmp;
	int		i;
	int		j;

	i = ft_strlen(dest);
	if (!(tmp = ft_memalloc(i + (ft_strlen(src)))))
		return (NULL);
	j = 0;
	if (!(tmp = ft_strdup(dest)))
		return (src);
	while (src[j] != '\0')
	{
		tmp[i + j] = src[j];
		j++;
	}
	tmp[i + j] = '\0';
	return (tmp);
}
