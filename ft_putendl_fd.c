/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berbay <berbay@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 20:42:55 by berbay            #+#    #+#             */
/*   Updated: 2022/12/27 20:45:12 by berbay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putendl_fd(char *s, int fd)
{
    size_t i;

    i = 0;
    if(!s)
        return ;
    while(s[i])
    {
        ft_putchar_fd(s[i], fd);
        i++;
    }
    write(fd, "\n", 1);
}