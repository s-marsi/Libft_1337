/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarsi <smarsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 18:40:03 by smarsi            #+#    #+#             */
/*   Updated: 2023/11/16 12:36:24 by smarsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*dest;
	unsigned char	*source;

	if (dst == src)
		return (dst);
	dest = (unsigned char *)dst;
	source = (unsigned char *)src;
	while (n--)
	{
		*dest = *source;
		dest++;
		source++;
	}
	return (dst);
}
