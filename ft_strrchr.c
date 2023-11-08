/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mansoor <mansoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:57:48 by mansoor           #+#    #+#             */
/*   Updated: 2023/11/08 17:09:18 by mansoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include <string.h>
//#include <libft.h>

char    *ft_strrchr(const char  *s, int c)
{
    char    *mak;

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

int	main()
{
	char	str[] = "Onde esta o W? Ca esta ele";
	char	c = 'W';
	ft_putendl_fd(ft_strchr(str, c), 1);
}