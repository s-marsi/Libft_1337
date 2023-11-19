/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarsi <smarsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:07:22 by smarsi            #+#    #+#             */
/*   Updated: 2023/11/13 17:31:31 by smarsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
#include <stddef.h>
// char	mapi(unsigned int n, char c)
// 	{
// 		c = c + n;
// 		return (c);
// 	}

// void iteri(unsigned int c, char *s)
// {
// 	s[c] = 'b';
// }

int	main(void)
{
/*	printf("%d\n", ft_isalpha('a'));
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

	int a0  = 0;
	ft_memset(&a0,1,1);
	ft_memset((char *)&a0 +1,1,1);
	ft_memset((char *)&a0 +2,1,1); 
	ft_memset((char *)&a0 +3,1,1); 
	printf("%d",a0);
		// -------- bzero -----------

	printf("\n------------  bzero  ------------------\n\n");
	int e;
	int k;
	bzero(&e, 1);
	ft_bzero(&k, 1);
	printf("%d \n %d", e, k);

	int o[] = {1, 2 , 3};
	int p[] = {1, 2 , 3};
	bzero(&o, 1);
	ft_bzero(&p, 1);
	printf("%d \n%d", o[0], p[0]);

	printf("\n------------  memchr  ------------------\n\n");
	// char *s = "hello world";
	// int q = 'e';
	// printf("%s \n", (char *)memchr((const void*)s, q, 8));
	// char *y = "hello world";
	// printf("%s \n", (char *)ft_memchr(NULL, q, 8));
	// int tab[7] = {-49, 49, 1, -1, 0, -2, 2};
	// char *ab = ft_memchr(tab, -1, 2);
    // printf("%d", *((char *)ab));
	// printf("%d", (unsigned char)-49);

	// --------------------- memcpy ---------------------

	// printf("\n------------  memcpy  ------------------\n\n");

		char *src = "hi";
 		char *buff1 = "hi";
		ft_memcpy(buff1, src, 4);
		printf("%s\n", buff1);
		memcpy(buff1, src, 4);
		printf("%s\n", buff1);

 		char *src2 = "hello \0 dexter morgan";
		char buff2[2];
		// memcpy(buff2, src2, 14);
		// printf("%s\n", buff2 + 8);
		ft_memcpy(buff2, src2, 14);
		printf("%s\n", buff2 + 8);

		int array [] = { '\201', '\200', '\200', '\200', '\200' };
    	int copy[5];
    	ft_memcpy( copy, array, 20);
        
    	for(int length = 0; length < 5; length++ ) {
        	printf( "%d ", copy[ length ] );
    	}
    	printf( "\n");
*/
	// --------------------- memmove ---------------------
	// printf("\n------------  memove  ------------------\n\n");
 //char ptr0[10]="abcdef";
	
	// char src[10] = "hello";
	// ft_memmove(src + 1, src , 4);
	// printf("%s ft_memove : \n", src);
	// int size = 128 ; 
 	// char *dst = (char *)malloc(sizeof(char) * size);
 	// char *data = (char *)malloc(sizeof(char) * size);
	// __builtin___memset_chk (data, 'A', size, __builtin_object_size (data, 0));
	// ft_memcpy(dst, data, size);
	// printf("%s\n", dst );
		
	// --------------------- memcmp ---------------------
	// printf("\n------------  memcpr  ------------------\n\n");
	// printf("ft_memcmp %d\n", ft_memcmp("hel\200lo", "hello", 3));
	// printf("memcmp %d\n", memcmp("hel\200lo", "hello", 3));
	// return (0); 

//          --------------------- substr ---------------------
	// printf("\n------------  substr  ------------------\n\n");
	// printf("ft_substr : %s\n",  ft_substr(NULL, 10, 10) );
	// printf("ft_substr : %s\n",  ft_substr("hello dexter morgan", 5, 10) );

//        --------------------- strjoin ---------------------
	// printf("\n------------  strjoin  ------------------\n\n");
	// printf("ft_substr : %s\n",  ft_strjoin("hello", " world"));
	// printf("ft_substr : %s\n",  ft_strjoin("test", "2"));
	// printf("ft_substr : %s\n",  ft_strjoin(NULL, "2"));


//          --------------------- strtrim ---------------------

	// printf("\n------------  strtrim  ------------------\n\n");
	// printf("%s", ft_strtrim(" p", "\0 abc"));


//          --------------------- itoi ---------------------

	// printf("\n------------  itoi  ------------------\n\n");
	// printf("%s\n", ft_itoa(100));
	// printf("%s\n", ft_itoa(-15400));
	// printf("%s\n", ft_itoa(56456487));
	// printf("%s\n", ft_itoa(-102));
	// printf("%s\n", ft_itoa(0));
	// printf("%s\n", ft_itoa(-0));


//          --------------------- split ---------------------

	// printf("\n------------  split  ------------------\n\n");
	// char **str;
	// int i = 0;
	// str = ft_split(" hello dexter morgan ", ' ');
	// while (i < 3)
	// 	printf("%s\n", str[i++]);
	// str[2] = NULL;
	// if (str)
	// {
	// 	i = 0;
	// 	free(str);
	// }
	
	
//          --------------------- strmapi ---------------------

	// printf("\n------------  strmapi  ------------------\n\n");

	
	// char *rachid = ft_strmapi("hello", mapi);
	// printf("%s", rachid);
	// free(rachid);

	
	
//          --------------------- striteri ---------------------

	// printf("\n------------  striteri  ------------------\n\n");
	// char str[] = "tested";
	// // void (*p) (unsigned int , char *) = &iteri;
	// ft_striteri(str, &iteri);
	// printf("%s", str);



//          --------------------- ft_putchar_fd ---------------------

	// printf("\n------------  ft_putchar_fd  ------------------\n\n");
	// int	fd = creat("aaaaa.txt", 400);
	// int	c = open("aaaa.txt", O_CREAT | O_RDWR, 400);
	// ft_putchar_fd('k', fd);
	// ft_putchar_fd('k', c);
	// ft_putchar_fd('k', c);

	
//          --------------------- ft_putstr_fd ---------------------

/*  
	printf("\n------------  ft_putstr_fd  ------------------\n\n");
	int fd = open("a.txt", O_CREAT | O_RDWR, 400);
	int c = creat("aa.txt", 400);
	ft_putstr_fd("hello from main", fd);
	ft_putstr_fd("hello from main", c);
*/



//          --------------------- ft_putendl_fd ---------------------


/*
	printf("\n------------  ft_putendl_fd  ------------------\n\n");
	int fd = open("a.txt", O_CREAT | O_RDWR, 400);
	int c = creat("aa.txt", 400);
	ft_putendl_fd("hello from main", fd);
	ft_putendl_fd("hello from main", c);
*/

//          --------------------- ft_putnbr_fd ---------------------


// /*
	printf("\n------------  ft_putnbr_fd  ------------------\n\n");
	// int fd = open("a.txt", O_CREAT | O_RDWR, 400);
	// ft_putnbr_fd(-2147483647, 1);
// */


	return (0); 

}
