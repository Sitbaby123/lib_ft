/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal-ketb <mal-ketb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 23:21:52 by mal-ketb          #+#    #+#             */
/*   Updated: 2023/11/29 23:10:26 by mal-ketb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (needle[0] == '\0')
		return ((char *)haystack);
	i = 0;
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			while (haystack[i + j] == needle[j] && i + j < len)
			{
				if (needle[j + 1] == '\0')
					return ((char *)haystack + i);
				j++;
			}
		}
		i++;
	}
	return (NULL);
}

// int main()
// {
// 	// printf("%s\n", ft_strnstr("fake", ((void *)0), 3));
// 	printf("%s\n", strnstr("fake", ((void *)0), 3));
// 	// char	str[] = "Indo eu, indo eu";
// 	// char	str1[] = "indo";
// 	// char *result = ft_strnstr(str, str1, ft_strlen(str));
// 	// int i = 0;
// 	// while(i < ft_strlen(result))
// 	// {
// 	// 	printf("%c",result[i++]);
// 	// }
// }
