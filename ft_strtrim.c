/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal-ketb <mal-ketb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 22:18:23 by mal-ketb          #+#    #+#             */
/*   Updated: 2023/11/29 23:11:03 by mal-ketb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	x;
	size_t	y;
	char	*st;

	x = 0;
	y = ft_strlen(s1);
	st = 0;
	if (s1 != 0 && set != 0)
	{
		while (s1[x] && ft_strchr(set, s1[x]))
			x++;
		while (s1[y - 1] && ft_strchr(set, s1[y - 1]) && y > x)
			y--;
		st = (char *)malloc(sizeof(char) * (y - x + 1));
		if (st)
			ft_strlcpy(st, &s1[x], y - x + 1);
	}
	return (st);
}
