/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarsi <smarsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 21:08:07 by smarsi            #+#    #+#             */
/*   Updated: 2023/11/08 11:32:33 by smarsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;
	size_t	len2;

	if (!s)
		return (NULL);
	if(start >= ft_strlen(s))
		return (ft_strdup(""));
	len2 = ft_strlen(s + start);
	if (len > len2)
		len = len2;
	sub = ft_calloc(len + 1, 1);
	if (!sub)
		return (NULL);
	i = 0;
	while (i < len)
	{
		sub[i++] = s[start];
		start++;
	}
	return (sub);
}
