/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berbay <berbay@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 18:51:12 by berbay            #+#    #+#             */
/*   Updated: 2022/12/20 17:06:08 by berbay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
    int i;

    if (!*(unsigned char *)src && !*(unsigned char *)dst)
        return (0);
    if (dst > src)
    {
        i = (int)len - 1;
        while (i >= 0)
        {
            *(char *)(dst + i) = *(char *)(src + i);
            i --;
        }
    }
    else 
    {
        i = 0;
        while (i < (int)len)
        {
            *(char *)(src + i) = *(char *)(dst + i);
            i ++;
        }
    }
    return (dst);
}