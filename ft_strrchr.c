/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berbay <berbay@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 14:08:29 by berbay            #+#    #+#             */
/*   Updated: 2022/12/13 16:01:28 by berbay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *str, int c)
{ 
    int i = ft_strlen(str);

    while ((char)c != str[i])
    {
        if (i == 0)
            return (NULL);
        i --;
    }
    return ((char *)(str + i));
}