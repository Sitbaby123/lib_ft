/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal-ketb <mal-ketb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 19:32:22 by mal-ketb          #+#    #+#             */
/*   Updated: 2023/11/26 20:26:38 by mal-ketb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list	**lst, t_list	*new)
{
	if (!(*lst))
		return ;
	if (*lst)
		new->next = *lst;
	*lst = new;
}

// Check if the first node is Null then return
// Swap values , save the first one of the original then set it to be next and new to be the first one
