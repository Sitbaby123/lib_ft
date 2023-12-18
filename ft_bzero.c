/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal-ketb <mal-ketb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 21:04:28 by mal-ketb          #+#    #+#             */
/*   Updated: 2023/11/25 21:21:10 by mal-ketb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*alhai;

	alhai = (unsigned char *)s;
	while (n--)
		*alhai++ = 0;
}
