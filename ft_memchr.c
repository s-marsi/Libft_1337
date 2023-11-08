/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarsi <smarsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 10:17:29 by smarsi            #+#    #+#             */
/*   Updated: 2023/11/06 18:39:23 by smarsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*dest;
	dest = (unsigned char *)s;
	if (n > 0)
	{
		while (*dest != (unsigned char )c && --n)
			dest++;
		if (*dest == (unsigned char )c)
			return ((void *)dest);
	}
	return (NULL);
}
