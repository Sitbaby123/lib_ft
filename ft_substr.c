/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal-ketb <mal-ketb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 20:16:37 by mal-ketb          #+#    #+#             */
/*   Updated: 2023/11/30 00:47:20 by mal-ketb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int i;
	char *pt;
	size_t j;

	i = start;
	j = ft_strlen(s);
	if (start > j)
	{
		pt = malloc(sizeof(char));
		pt[0] = '\0';
		return (pt);
	}
	if (len > ft_strlen(s))
	{
		size_t k = 0;
		pt = malloc(sizeof(char) * ((j - start) + 1));
		while (k < j - start)
		{
			pt[k] = s[i];
			k++;
			i++;
		}
		pt[k] = '\0';
		return (pt);
	}
	pt = malloc(sizeof(char) * (len + 1));
	if (!pt)
		return (NULL);
	while (s[i] && i - start < len)
	{
		pt[i - start] = s[i];
		i++;
	}
	pt[i - start] = '\0';
	return (pt);
}

// int main()
// {
// 	// char s[] = ""Mansoooooooooor";
// 	char s[] = "geekjkn";
// 	int start = 3;
// 	size_t len = 3;
// 	printf("%s\n", ft_substr(s, start, len));
// 	return (0);
// }
