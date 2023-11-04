/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarsi <smarsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 19:32:59 by smarsi            #+#    #+#             */
/*   Updated: 2023/11/04 21:52:58 by smarsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_dst;
	size_t	len_src;
	size_t	lenght_return;
	size_t	i;

	len_src = ft_strlen(src);
	len_dst = ft_strlen(dst);
	if (dstsize == 0 || dstsize < len_dst)
		return (ft_strlen(src) + dstsize);
	lenght_return = len_dst + len_src;
	i = 0;
	while (src[i] && len_dst + i < dstsize - 1)
	{
		dst[len_dst + i] = src[i];
		i++;
	}
	dst[len_dst + i] = '\0';
	return (len_dst  + len_src);
}
