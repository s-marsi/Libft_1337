/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarsi <smarsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 17:43:58 by smarsi            #+#    #+#             */
/*   Updated: 2023/11/06 10:03:18 by smarsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		signe;
	size_t	digit;

	digit = 0;
	signe = 1;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
	{
		signe = -1;
		str++;
	}
	if (*str == '+')
		str++;
	while (ft_isdigit(*str))
	{
		digit = (digit * 10 + *str) - '0';
		if (signe > 0 && digit >= 9223372036854775807)
			return (-1);
		if (signe < 0 && digit > 9223372036854775807)
			return (0);
		str++;
	}
	return (digit * signe);
}