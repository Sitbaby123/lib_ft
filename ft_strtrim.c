/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal-ketb <mal-ketb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 22:18:23 by mal-ketb          #+#    #+#             */
/*   Updated: 2023/12/17 18:10:09 by mal-ketb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	x;
	size_t	y;
	char	*st;

	st = 0;
	if (!s1 && !set)
		return (NULL);
	if (s1 != 0 && set != 0)
	{
		y = ft_strlen(s1);
		x = 0;
		while (s1[x] && ft_strchr(set, s1[x]))
			x++;
		while (y > x && s1[y - 1] && ft_strchr(set, s1[y - 1]))
			y--;
		st = (char *)malloc(sizeof(char) * (y - x + 1));
		if (!st)
			return (NULL);
		ft_strlcpy(st, &s1[x], y - x + 1);
	}
	return (st);
}
