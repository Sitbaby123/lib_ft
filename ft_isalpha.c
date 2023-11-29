/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal-ketb <mal-ketb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 20:47:27 by mal-ketb          #+#    #+#             */
/*   Updated: 2023/11/26 18:49:29 by mal-ketb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int i)
{
	if ((i >= 'a' && i <= 'z') || (i >= 'A' && i <= 'Z'))
		return (1);
	return (0);
}

// int	main(void)
// {
// 	ft_putnbr_fd(ft_isalpha('a'), 1);
// 	ft_putchar_fd('\n', 1);
// 	ft_putnbr_fd(ft_isalpha('U'), 1);
// 	ft_putchar_fd('\n', 1);
// 	ft_putnbr_fd(ft_isalpha('5'), 1);
// 	ft_putchar_fd('\n', 1);
// 	ft_putnbr_fd(ft_isalpha('\t'), 1);
// 	ft_putchar_fd('\n', 1);
// }
