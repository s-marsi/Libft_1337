/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarsi <smarsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 11:07:59 by smarsi            #+#    #+#             */
/*   Updated: 2023/11/21 10:54:33 by smarsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libft.h"
// void del(void *d)
// {
// 	d = NULL;
// }

// void *lstmap(void *d)
// {
// 	(*(int *)d)++;
// 	return (d);
// }

// int main()
// {
// 	t_list	*head;
// 	t_list	*lst_copy;
	
// 	int	a2 = 2;
// 	int	a = 1;
// 	int	a3 = 3;
// 	head = 	ft_lstnew(&a2);
// 	ft_lstadd_front(&head, ft_lstnew(&a));
// 	ft_lstadd_back(&head, ft_lstnew(&a3));
// 	lst_copy = head;
// 	while (lst_copy)
// 	{
// 		printf("%d\n", *(int *)lst_copy->content);
// 		lst_copy = lst_copy->next;
// 	}
// 	;
// 	lst_copy = ft_lstmap(head, lstmap, del);
// 	while (lst_copy)
// 	{
// 		printf("a + 1 : %d\n", *(int *)lst_copy->content);
// 		lst_copy = lst_copy->next;
// 	}
// 	printf("before : %d\n", ft_lstsize(head));
// 	ft_lstclear(&head, del);
// 	printf("after  : %d\n", ft_lstsize(head));
// }
// void iter(void *content)
// {
//     *(int *)content = *(int *)content + 1;
// }

// int main(void)
// {
//     printf("%zu\n", strlcat(NULL, "f", 0));
//     printf("%zu\n", ft_strlcat(NULL, "f", 0));
//     return (0);
// }

// int main0(void)
// {
//     int a = 4;
//     int b = 5;
//     int d = 7;
//     t_list *ptr ;
// 	ptr = ft_lstnew(&a);

//     ft_lstadd_front(&ptr , ft_lstnew(&b));
//     ft_lstadd_back(&ptr, ft_lstnew(&d));
//     printf("size : %d\n", ft_lstsize(ptr));
// 	ft_lstdelone(ptr, del);
//     printf("size after del: %d\n",ft_lstsize(ptr) );
// 	system("leaks a.out");
//     return (0); 
// }

// int main(){main0();}

// int main(void)
// {
//     int a = 4;
//     int b = 5;
//     int d = 6;
//     t_list *ptr ;
//     t_list *ptr_c ;
// 	ptr = ft_lstnew(&b);

//     ft_lstadd_front(&ptr , ft_lstnew(&a));
//     ft_lstadd_back(&ptr, ft_lstnew(&d));
//     printf("size : %d\n", ft_lstsize(ptr));
//     ft_lstiter(ptr, &iter);
//     ptr_c = ptr;
//     while (ptr_c)
//     {
//         printf("%d\n", *(int *)ptr_c->content);
//         ptr_c = ptr_c->next;
//     }
//     ft_lstclear(&ptr, del);
//     printf("size after clear: %d\ßßßßn",ft_lstsize(ptr) );
    
//     return (0); 
// }


// int	main()
// {
// 	printf("origin : %s\n", (char *) calloc(SIZE_MAX,0 ));
// 	printf("ft :%s", (char *) ft_calloc(SIZE_MAX, 0));
// 	return (0);
// }

// int main()
// {
// 	int fd = open("aa.txt", O_CREAT | O_RDWR, 0755);
// 	int fd2 = open("aaa.txt", O_CREAT | O_RDWR, 0755);
// 	printf("%d\n%d\n", fd, fd2);
//  	return (0);
// }

// int	main()
// {
// 	char **s;
// 	int i = 0;
// 	s = ft_split("  test from    main  ", ' ');
// 	while (i < 3 )
// 	{
// 		printf("%s\n", s[i++]);
// 	}
// 	return (0);	
// }

// int main1()
// {
// 	void *b;
// 	int a;
// 	b = &a;
// 	printf("%p\n", b);
// 	printf("%p\n", ++b);
// 	printf("%d", *(int*)b);
// 	int *ptr=ft_calloc(10000, 10);
// 	return (0);
// }
// int main(){
// 	main1();
// 	while(1){};
// 	}

//void *f(void *c)
//{
//	*(int *)c += 1; 
//	return c;
//}
//void del(void *c)
//{
//	c = NULL;
//}
//int main1()
//{
//	t_list *ptr;
//	int a = 1;
//	int b = 2;
//	ptr = ft_lstnew(&a);
//	ft_lstadd_back(&ptr, ft_lstnew(&b));
//	ft_lstmap(ptr, f, del);
//ft_lstclear(&ptr,del);
//	
//	return (0);
//}
//int main(){main1();system("leaks a.out");}
//-fsanitize=address
