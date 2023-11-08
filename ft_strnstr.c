/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mansoor <mansoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:11:21 by mansoor           #+#    #+#             */
/*   Updated: 2023/11/08 09:31:13 by mansoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>

char    *ft_strnstr(const char  *haystack, const char *needle, size_t len)
{
    size_t  x;

    if (*haystack == 0)
        return ((char *)needle);
    x = ft_strlen(needle);
    if (len == 0)
        return (0);
    while (*haystack && x <= len)
    {
        if (*haystack == needle && ft_strncmp(haystack, needle, x) == 0)
            return ((char *)haystack);
            haystack++;
            len--;
    }
    return (NULL);
}

int main()
{
    char   str[] = "helo ae, helo ae";
    char    str[] = "helo";
    ft_putsend1_fd("%d, (str, str1, ft_strlen(str))", 1);
}