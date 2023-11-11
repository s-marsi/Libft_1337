/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarsi <smarsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 10:11:26 by smarsi            #+#    #+#             */
/*   Updated: 2023/11/10 21:48:31 by smarsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static	void	free_allocation(char *str)
// {
// 	free(str);
// }

static	int	count_word(char const *s, char c)
{
	int	count;
	int	flag ;
	int	i;

	count = 0;
	flag = 1;
	i = 0;
	while (s[i])
	{
		if (flag && s[i] != c)
		{
			flag = 0;
			count++;
		}
		if (s[i] == c)
			flag = 1;
		i++;
	}
	return (count);
}

static	char	*get_word(char const *s, char c, int *index)
{
	int	i;
	int	start;
	char *str;

	i = *index;
	while (s[i] && s[i] == c)
		i++;	
	start = i;
	while (s[i] && s[i] != c)
		i++;
	str = ft_calloc((i - start) + 1, sizeof(char));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s + start, (i - start) + 1);
	*index = i;
	return (str);
}

static	void ft_free(char **s)
{
	int	i;

	i = 0;
	while (s[i])
		free(s[i++]);
	free(s);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		index;
	int		i;

	str = ft_calloc(count_word(s, c) + 1, sizeof(char *));
	if (!str)
		return (NULL);
	i = 0;
	index = 0;
	while (i < count_word(s, c))
	{
		str[i] = get_word(s, c, &index);
		if (!str[i])
		{
			ft_free(str);
			return (NULL);
		}
		i++;
	}
	return (str);
}