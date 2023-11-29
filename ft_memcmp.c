/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal-ketb <mal-ketb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 22:10:28 by mal-ketb          #+#    #+#             */
/*   Updated: 2023/11/29 23:05:03 by mal-ketb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	index;
	int				x;

	x = 0;
	index = 0;
	if (!s1 && !s2)
		return (n);
	while (n--)
	{
		*(unsigned char *)s1 == *(unsigned char *)s2;
		x++;
		index++;
	}
	return (index);
}*/

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
