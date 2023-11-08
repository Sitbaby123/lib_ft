/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mansoor <mansoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 09:24:55 by mansoor           #+#    #+#             */
/*   Updated: 2023/11/08 09:27:09 by mansoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

int ft_strncmp(const char   *s1, const  char *s2, size_t n)
{
    unsigned char   *a;
    unsigned char   *b;

    a = (unsigned char *)s1;
    b = (unsigned char *)s2;
    while (n && a == b)
    {
        a++;
        b++;
        n--;
    }
    if (n)
        return (a - b);
    else
        return (0;)
}