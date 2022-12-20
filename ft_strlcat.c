/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berbay <berbay@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 14:12:24 by berbay            #+#    #+#             */
/*   Updated: 2022/12/16 15:37:43 by berbay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t n)
{
    size_t i;
    size_t j;
    
    i = 0;
    j = 0;

    if (!n && !dst)
        return (0);
    if (n <= (size_t)ft_strlen(dst))
        return (n + ft_strlen(src));
    i = ft_strlen(dst);
    j = 0;
    while ((i + 1 < n) && (src[j] != '\0'))
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[j]));
}