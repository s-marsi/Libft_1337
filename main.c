/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarsi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:07:22 by smarsi            #+#    #+#             */
/*   Updated: 2023/11/02 11:04:25 by smarsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int	main(void)
{
	printf("%d\n", ft_isalpha('a'));
	printf("%d\n", isalpha('a'));
	printf("%d\n", ft_isdigit('9'));
	printf("%d\n", isdigit('9'));
	printf("%d\n", ft_isalnum(65));
	printf("%d\n", isalnum(65));
	// -------- ft_isascii -----------
	printf("------------isascii------------------\n");
	printf("ft_isascii : %d\n", isascii(12));
	printf("isascii : %d\n", isascii(12));
	printf("ft_isascii : %d\n", isascii(127));
	printf("isascii : %d\n", isascii(128));
	// -------- ft_isprint -----------
	printf("------------isprint------------------\n");
	printf("ft_isprint : %d\n", ft_isprint(32));
	printf("isprint : %d\n", isprint(32));
	printf("ft_isprint : %d\n", ft_isprint(127));
	printf("isprint : %d\n", isprint(127));
	// -------- strlen -----------
	printf("------------strlen------------------\n");
	printf("ft_strlen : %zu\n", ft_strlen("hel\0lo"));
	printf("strlen : %zu\n", strlen("hel\0lo"));
	printf("ft_strlen : %zu\n", ft_strlen("hello"));
	printf("strlen : %zu\n", strlen("hello"));
	// -------- toupper -----------
	printf("------------toupper------------------\n");
	printf("ft_toupper : %c\n", ft_toupper('a'));
	printf("toupper : %c\n", toupper('a'));
	printf("ft_toupper : %c\n", ft_toupper(64));
	printf("toupper : %c\n", toupper(64));
	// -------- tolower -----------
	printf("------------tolower------------------\n");
	printf("ft_tolower : %c\n", ft_tolower('a'));
	printf("tolower : %c\n", tolower('a'));
	printf("ft_tolower : %c\n", ft_tolower(64));
	printf("tolower : %c\n", tolower(64));
		// -------- tolower -----------
	printf("------------tolower------------------\n");
	printf("ft_tolower : %c\n", ft_tolower('a'));
	printf("tolower : %c\n", tolower('a'));
	printf("ft_tolower : %c\n", ft_tolower(64));
	printf("tolower : %c\n", tolower(64));
		// -------- strchr -----------
	printf("------------strchr------------------\n");
	printf("ft_strchr : %s\n", ft_strchr("hello", 'e'));
	printf("strchr : %s\n", strchr("hello", 'e'));
	char *ptr = ft_strchr("he\0llo", '\0');
	char *ptr2 = strchr("he\0llo", '\0');
	printf("ft_strchr : %s\n", ptr + 1);
	printf("strchr : %s\n", ptr2 + 1);
	printf("strchr : %s\n", strchr("hello test", 't' + 256));
	printf("ft_strchr : %s\n", ft_strchr("hello test", 't' + 256));
		// -------- strrchr -----------
	printf("\n------------  strrchr  ------------------\n\n");
	
	printf("ft_strrchr : %s\n", ft_strrchr("hello", 's'));
	printf("strrchr : %s\n", strrchr("hello", 's'));
	char *ptr3 = ft_strrchr("he\0llo", '\0');
	char *ptr4 = strrchr("he\0llo", '\0');
	printf("ft_strrchr : %s\n", ptr3 + 1);
	printf("strrchr : %s\n", ptr4 + 1);
	printf("strchr : %s\n", strrchr("hello test", 't' + 256));
	printf("ft_strchr : %s\n", ft_strrchr("hello test", 't' + 256));

 	return (0);
}

