/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarsi <smarsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 21:18:19 by smarsi            #+#    #+#             */
/*   Updated: 2023/11/12 21:52:35 by smarsi           ###   ########.fr       */
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
		write (fd, "-", 1);
		nb = -nb;
	}
	if (nb < 10)
	{
		n = nb + '0';
		write (fd, &n, 1);
		return ;
	}
	divider = 1;
	while (nb / divider >= 10)
		divider *= 10;
	while (divider > 0)
	{
		n = (nb / divider) + '0';
		write (fd, &n, 1);
		nb = nb % divider;
		divider /= 10;
	}
}
