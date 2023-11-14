/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarsi <smarsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 21:18:19 by smarsi            #+#    #+#             */
/*   Updated: 2023/11/13 18:29:42 by smarsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;
	long	divider;

	nb = n;
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nb = -nb;
	}
	divider = 1;
	while (nb / divider >= 10)
		divider *= 10;
	while (divider > 0)
	{
		n = (nb / divider) + '0';
		ft_putchar_fd(n, fd);
		nb = nb % divider;
		divider /= 10;
	}
}
