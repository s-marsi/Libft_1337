/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarsi <smarsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:07:22 by smarsi            #+#    #+#             */
/*   Updated: 2023/11/06 10:17:00 by smarsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
#include <stddef.h>

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
	printf("ft_isascii : %d\n", ft_isascii(12));
	printf("isascii : %d\n", isascii(12));
	printf("ft_isascii : %d\n", ft_isascii(128));
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
	printf("strrchr : %s\n", strrchr("hello test", 't' + 256));
	printf("ft_strrchr : %s\n", ft_strrchr("hello test", 't' + 256));
	

	// -------- strncmp -----------
	printf("\n------------  strncmp  ------------------\n\n");
	printf("ft_strncmp ==> : %d\n", ft_strncmp("test\0a", "test\0s", 6));
	printf("ft_strncmp ==> : %d\n", ft_strncmp("test\0a", "test\0s", 6));
	printf("ft_strncmp : %d\n", ft_strncmp("te\200st", "te\0st", 3));
	printf("strncmp : %d\n", strncmp("te\200st", "te\0st", 3));
	printf("ft_strncmp : %d\n", ft_strncmp("rest", "test", 0));
	printf("strncmp : %d\n", strncmp("rest", "test", 0));
	printf("ft_strncmp dffddf: %d\n", ft_strncmp("9223372036854775807", "9223372036854775808", 3));
	printf("strncmp : %d\n", strncmp("test", "tesr", 3));

		// -------- strlcpy -----------
	printf("\n------------  strlcpy  ------------------\n\n");
	char test[] = "test world";
	char test2[] = "test world";
	printf("ft_strlcpy ==> : %zu", strlcpy(test, "hello", 3));
	printf(", %s\n", test);
	printf("strlcpy ==> : %zu", ft_strlcpy(test2, "hello", 3));
	printf(", %s\n", test2);

	char test3[] = "test world";
	char test4[] = "test world";
	printf("ft_strlcpy ==> : %zu", strlcpy(test3, "eeeeeeeeeeeeeeee", 10));
	printf(", %s\n", test3);
	printf("ft_strlcpy ==> : %zu", strlcpy(test4, "eeeeeeeeeeeeeeee", 10));
	printf(",  %s\n", test4);


		// -------- strlcat -----------


	printf("\n------------  strlcat  ------------------\n\n");
	char  dest[6] = "1234";
	printf("%zu\n", strlen(dest));
	printf("%zu\n", strlcat(dest, "56789", 3));
	char  dest2[6] = "1234";
	printf("%zu\n", ft_strlcat(dest2, "56789", 3));
	// char dest2[5] = "1234";
	// ft_strlcat(dest2, "56789", 5);
	// printf("%s\n", dest2);

		// -------- strnstr -----------


	printf("\n------------  strnstr  ------------------\n\n");
	char *s1 = "AAAAAAAAAAAAA";
 	size_t max = strlen(s1);
 	char *i1 = strnstr(s1, s1, max);
 	char *i2 = ft_strnstr(s1, s1, max);
	printf("%s\n", i1);
	printf("%s\n", i2);
	printf("%s\n", ft_strnstr("hello world", "lo", 4));
	printf("%s\n", strnstr("hello world", "lo", 4));
	// printf("%s\n", test + 1);
	// printf("%s\n", test2 + 1); 
	// printf("%s\n", strnstr("hello world", "llo", 10));
	// printf("%s\n", ft_strnstr("hello world", "llo", 10));

		// -------- atoi -----------

	printf("\n------------  atoi  ------------------\n\n");
	printf("%d\n",    atoi("92233720368547758080"));
	printf("%d\n", ft_atoi("92233720368547758080"));
	// printf("%s\n", test + 1);
	// printf("%s\n", test2 + 1); 
	// printf("%s\n", strnstr("hello world", "llo", 10));
	// printf("%s\n", ft_strnstr("hello world", "llo", 10));

		// -------- memset -----------

	printf("\n------------  memset  ------------------\n\n");
	int a = 1;
	int b = 2;
	memset(&a, 258, 4);
	ft_memset(&b, 258, 4);
	printf("%d\n%d\n",a, b);
	int c[] = {1, 2, 3};
	int d[] = {1, 2, 3};
	memset(&c, 1, 4);
	ft_memset(&d, 1, 4);
	printf("%d \n%d\n", c[2], d[2]);

		// -------- bzero -----------

	printf("\n------------  bzero  ------------------\n\n");
	int e;
	int k;
	bzero(&e, 1);
	ft_bzero(&k, 1);
	printf("%d \n %d", e, k);

		// -------- bzero -----------

	printf("\n------------  bzero  ------------------\n\n");
	int o[] = {1, 2 , 3};
	int p[] = {1, 2 , 3};
	bzero(&o, 1);
	ft_bzero(&p, 1);
	printf("%d \n%d", o[0], p[0]);

 	return (0);
}
