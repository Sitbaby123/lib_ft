/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal-ketb <mal-ketb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 20:04:46 by mal-ketb          #+#    #+#             */
/*   Updated: 2023/11/26 17:45:07 by mal-ketb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	temp = *lst;
	if (!del || !lst || *lst)
		return (NULL);
	while (temp)
	{
		temp = temp->next;
		ft_lstdelone(temp, del);
		*lst = temp;
	}
}


/*void    del(void *content)
{
    free(content);
}*/

//Iterate thrugh each the nodes and call the function that delete the content for each one
//U need to reset the first to point to the next node
// Save the next node in temp , then ur gonna delete the current node. U have to set to the next node;
