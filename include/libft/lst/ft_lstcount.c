/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstcount.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danli <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 12:15:57 by danli             #+#    #+#             */
/*   Updated: 2019/11/13 12:16:40 by danli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_lstcount(t_list *tetrilist)
{
	int x;

	x = 0;
	if (!tetrilist)
		return (x);
	while (tetrilist)
	{
		tetrilist = tetrilist->next;
		x++;
	}
	return (x);
}
