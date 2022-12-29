/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berbay <berbay@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 11:48:42 by berbay            #+#    #+#             */
/*   Updated: 2022/12/29 15:52:41 by berbay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include "libft.h"
#include <ctype.h>
#include <string.h>
#include <math.h> 
#include <stdlib.h>
#include "fcntl.h" //file control options

/*int main()
{
    //printf("%d\n", ft_isalpha('A'));
    //printf("%d\n", isalpha('5'));
    //printf("%d\n", ft_isdigit('1'));
    //printf("%d\n", isdigit('A'));
    //printf("%d\n", isalnum('A'));
    //printf("%d\n", ft_isalnum('A'));
    //printf("%d\n", ft_isascii('A'));
    //printf("%d\n", isascii('\n'));
     //printf("%d\n", ft_isprint('~'));
    //printf("%d\n", isprint('~'));
    //printf("%d\n", toupper('K'));
    //printf("%d\n", ft_toupper('K'));
    //printf("%d\n", tolower('a'));
    //printf("%d\n", ft_tolower('a'));
}*/
/*int main()
{
    char a[] = "betul";
    printf("%lu", ft_strlen(a));
    printf("%lu", strlen(a));
}*/

/*int main ()
{
    char src[] = "hızlı bilgisayar";
    char dst[] = "bil";
    printf("%s\n", ft_strchr(src, 'a'));
    printf("%s\n", strchr(src, 'a'));
    //printf("%s\n", strrchr(src, 'a'));
    //printf("%s\n", ft_strrchr(src, 'a'));
    //return (0);
    //printf ("%s\n", memset (a, 'x', 9));
    //printf ("%s", ft_memset (a, 'X', 9));
    //printf ("%s\n", bzero(a, 5));
    //ft_bzero(a, 6);
    //printf ("%s", a);
    //printf ("%zu\n", ft_strlcpy(dst, src, 3));
    //printf ("%zu", strlcpy(dst, src, 3));
    //printf ("%zu\n", ft_strlcat(dst, src, 3));
    //printf ("%zu", strlcat(dst, src, 3));
    //printf ("%zu\n", ft_strnstr(dst, src, 3));
    //printf ("%zu\n", strnstr(dst, src, 3));
}*/
/*
int main()
{
    char s1[] = "bil";
    char s2[] = "bil";
    printf ("%d\n", ft_strncmp(s1, s2, 4));
    printf ("%d\n", strncmp(s1, s2, 4));
}*/

//int main ()
//{
  //  char s1[] = "bilgisayar";
    //char s2[] = "bilgi";
    //printf("%d\n", ft_atoi("  123"));
    //printf("%d", memcmp(s1, s2, 6));
//}
/*int main ()
{
    char *a = "..serif ..";
    char *z = ".ll";
    printf ("%s", ft_strtrim(a,z));
}*/

// int main()
// {
//     char str[] = "bir iki üç";
//     printf("%s", ft_split(str, ' ')[2]);
// }

// int main()
// {
//     int a = 123;
//     printf("%s", ft_itoa(a));
// }

//int main()
//{
//    int fd;
//    fd = open("a.txt", O_CREAT | O_RDWR, 777);
//    // ft_putendl_fd("a", fd);
//    // ft_putchar_fd('a', fd);
//    ft_putnbr_fd(-1632, fd);
//}

//int main()
//{
//    t_list *new;

//    new = malloc (sizeof (t_list));
//    new->content = ft_strdup("betül");
//    new->next = NULL;

//    t_list *listem;

//    listem = malloc (sizeof (t_list));
//    listem->content = ft_strdup("serif");
//    listem->next = NULL;

//    ft_lstadd_front(&listem, new);

//    while (new)
//    {
//        printf ("%s", new->content);
//        new = new->next;
//    }
//}

int main()
{
    t_list *lst;
    t_list *lst2;
    t_list *lst3;
    t_list *lst4;
    t_list *lst5;
    lst = malloc(sizeof (t_list));
    lst -> content = ft_strdup("deneme");
    lst2 = malloc(sizeof(t_list));
    lst2 -> content = ft_strdup("denemedeneme");
    lst3 = malloc(sizeof(t_list));
    lst3 -> content = ft_strdup("denedene");
    lst4 = malloc(sizeof (t_list));
    lst4 -> content = ft_strdup("mecidiyekoymetrobus");
    lst5 = malloc(sizeof (t_list));
    lst5 -> content = ft_strdup("dsddssdsdeneme");
    
   lst->next = lst2;
   lst2->next = lst3;
   lst3->next = lst4;

   ft_lstadd_back(&lst, lst5);
   //ft_lstdelone(lst3, free);
    ft_lstclear(&lst, free);
    
    //ft_lstadd_front(&lst, lst2);

    //ft_lstlast yazdırabilmek için printf değeri ne olmalı?
    //printf("%s", ft_lstlast(lst)-> content);
    printf("%d", ft_lstsize(lst));
    printf("%s", lst3->content);

}

