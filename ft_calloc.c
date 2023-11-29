/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal-ketb <mal-ketb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 21:24:39 by mal-ketb          #+#    #+#             */
/*   Updated: 2023/11/26 20:00:01 by mal-ketb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*alketbi;

	alketbi = malloc(count * size);
	if (alketbi == NULL)
		return (NULL);
	ft_bzero(alketbi, count * size);
	return (alketbi);
}
