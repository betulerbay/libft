/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berbay <berbay@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 18:50:31 by berbay            #+#    #+#             */
/*   Updated: 2022/12/18 19:32:04 by berbay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i;
    unsigned char *str = (unsigned char *)s1;
    unsigned char *str2 = (unsigned char *)s2;

    if (!*str && !*str2)
        return (0);

    i = 0;
    while (i < n)
    {
        if (str[i] != str2[i])
            return (str[i] - str2[i]);
        i++;
    }
    return (0);
}

