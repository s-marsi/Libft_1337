/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarsi <smarsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 18:33:24 by smarsi            #+#    #+#             */
/*   Updated: 2023/11/09 20:52:51 by smarsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	calcule_number(size_t n)
{
	int	count;

	count = 0;
	while (n / 10 > 0)
	{
		n = n / 10;
		count ++;
	}
	return (n)
}

char	*ft_itoa(int n)
{
	size_t	nb;

	nb = n;
	printf("%d", calcule_number(nb));
	return ("test");
}