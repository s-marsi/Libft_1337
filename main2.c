/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarsi <smarsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 11:07:59 by smarsi            #+#    #+#             */
/*   Updated: 2023/11/15 14:48:42 by smarsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void del(void *content)
{
    content = NULL;
}

void iter(void *content)
{
    *(int *)content = *(int *)content + 1;
}

int main(void)
{
    printf("%zu\n", strlcat(NULL, "f", 0));
    printf("%zu\n", ft_strlcat(NULL, "f", 0));
    return (0);
}

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
//     printf("size after clear: %d\n",ft_lstsize(ptr) );
    
//     return (0); 
// }
