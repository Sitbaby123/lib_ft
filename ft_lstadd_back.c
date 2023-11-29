/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal-ketb <mal-ketb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 19:55:37 by mal-ketb          #+#    #+#             */
/*   Updated: 2023/11/26 17:36:21 by mal-ketb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list	**lst, t_list	*new)
{
	t_list	*last;
	t_list	*tem

	new = *lst;
	if (lst)
	{
		if (*lst)
		{
			last = ft_lstlast(*lst);
			new = lst->next;
		}
		else
			*lst = new;
	}
}

// MOVE TO THE END THEN RESET pointer
//Last points to Null , so go to the last , change the next pointer to point to the new node



