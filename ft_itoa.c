/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal-ketb <mal-ketb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 22:54:37 by mal-ketb          #+#    #+#             */
/*   Updated: 2023/11/29 23:04:17 by mal-ketb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	abso(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

static unsigned int	ft_number_length(int number)
{
	unsigned int	len;

	len = 0;
	if (number == 0)
		return (1);
	if (number < 0)
	{
		len += 1;
		number *= -1;
	}
	while (number)
	{
		number /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char			*str;
	unsigned int	num;
	unsigned int	len;

	num = 0;
	len = ft_number_length(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	if (n == 0)
	{
		str[0] = '0';
	}
	str[len] = '\0';
	if (n < 0)
	{
		str[0] = '-';
	}
	while (n != 0)
	{
		str[--len] = abso(n % 10) + '0';
		n /= 10;
	}
	return (str);
}
