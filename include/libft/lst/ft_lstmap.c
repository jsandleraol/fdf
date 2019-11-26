/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonsandl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 14:31:28 by jonsandl          #+#    #+#             */
/*   Updated: 2019/09/30 10:00:25 by jonsandl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*head;

	new = (f)(lst);
	head = new;
	while (lst->next)
	{
		lst = lst->next;
		if (!(new->next = ((f)(lst))))
		{
			free(new->next);
			return (NULL);
		}
		new = new->next;
	}
	return (head);
}
