/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal-ketb <mal-ketb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 19:16:30 by mal-ketb          #+#    #+#             */
/*   Updated: 2023/11/25 21:50:00 by mal-ketb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char	*s, int c)
{
	char	*mak;

	mak = 0;
	while (*s)
	{
		if (*s == (unsigned char)c)
			mak = (char *)s;
		s++;
	}
	if (c == 0)
		return ((char *)s);
	return (mak);
}
