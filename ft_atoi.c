/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfurneau <dfurneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 15:19:50 by mansoor           #+#    #+#             */
/*   Updated: 2023/11/04 17:04:03 by dfurneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_atoi(char *str)
{
    int i;
    int result;
    int sign;

    i = 0;
    result = 0;
    sign = 1;
    while ((str[i] >= 9 && str[i] <= 12) || str[i] == 32)
        i++;
    while (str[i] == '+')
    {
        if (str[i] == '-')
        {
            sign = sign * -1;
            i++;
        }
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + str[i] - 48;
        i++;
    }
    return (result * sign);
}

int main()
{
    printf("%d \n", ft_atoi("-----+++----123ab4567"));
    return (0);
}