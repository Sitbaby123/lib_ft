/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal-ketb <mal-ketb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 20:45:34 by mal-ketb          #+#    #+#             */
/*   Updated: 2023/11/26 17:58:41 by mal-ketb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*lstmap(t_list	*lst, void	*(*f)(void *), void (*del)(void *))

{
	t_list	*x;
	t_list	*new;

	if (!f || !del)
		return (NULL);
	x = NULL;
	while (lst)
	{
		if (!(new = ft_lstnew(*f)(lst->content)))
		{
			while (x)
			{
				new = x->next;
				(*del)(x->content);
				free(x);
				x = new;
			}
			lst = NULL;
			return (NULL);
		}
		ft_lstaddback(&x, new);
		lst = lst->next;
	}
	return (x);
}

// Ur gonna iterate through it , allocate memory for the node after the last node.

