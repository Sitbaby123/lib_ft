/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal-ketb <mal-ketb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 20:02:39 by mal-ketb          #+#    #+#             */
/*   Updated: 2023/11/26 17:45:26 by mal-ketb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list	*lst, void (*del)(void *))
{
	if (!del)
		return (NULL);
	if (lst)
	{
		(*del)(lst->content);
		free(lst);
	}
}

/*void    del(void *content)
{
    free(content);
}*/

/*int     main(void)
{
    t_list *lst;
    int i;

    i = 42;
    lst = (t_list *)malloc(sizeof(t_list));
    lst->content = malloc(sizeof(int));
    *(int *)lst->content = i;
    lst->next = NULL;

    ft_lstclear(&lst, &del);

    return (0);
}*/
