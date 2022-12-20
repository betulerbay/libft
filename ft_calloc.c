/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berbay <berbay@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 12:35:01 by berbay            #+#    #+#             */
/*   Updated: 2022/12/20 12:58:45 by berbay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void * ft_calloc(size_t count, size_t size)
{
    void *ptr;
    size_t mem;

    mem = count * size; // example -> size = typeof(int)
    ptr = malloc(mem);
    if (!ptr)
        return (NULL);
    ft_bzero(ptr, mem);
    return (ptr);
}