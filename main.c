/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berbay <berbay@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 11:48:42 by berbay            #+#    #+#             */
/*   Updated: 2022/12/16 15:25:22 by berbay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include "libft.h"
#include <ctype.h>
#include <string.h>

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

int main ()
{
    char src[] = "bilgisayar";
    char dst[] = "yey";
    //printf("%s\n", ft_strchr(a, 'a'));
    //printf("%s\n", strchr(a, 'a'));
    //printf("%s\n", strrchr(a, 'a'));
    //printf("%s\n", ft_strrchr(a, 'a'));
    //return (0);
    //printf ("%s\n", memset (a, 'x', 9));
    //printf ("%s", ft_memset (a, 'X', 9));
    //printf ("%s\n", bzero(a, 5));
    //ft_bzero(a, 6);
    //printf ("%s", a);
    //printf ("%zu\n", ft_strlcpy(dst, src, 3));
    //printf ("%zu", strlcpy(dst, src, 3));
    printf ("%zu\n", ft_strlcat(dst, src, 3));
    printf ("%zu", strlcat(dst, src, 3));
}
/*
int main()
{
    char s1[] = "bil";
    char s2[] = "bil";
    printf ("%d\n", ft_strncmp(s1, s2, 4));
    printf ("%d\n", strncmp(s1, s2, 4));
}*/