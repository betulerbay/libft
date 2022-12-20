/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berbay <berbay@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 18:17:48 by berbay            #+#    #+#             */
/*   Updated: 2022/12/13 14:06:27 by berbay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


char *ft_strchr(const char *str, int c)
{
    while ((char)c != *str)
    {
        if (*str == '\0') // if (!*str)
            return (NULL);
        str++;
    }
    return ((char *)str);
}