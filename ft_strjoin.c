/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berbay <berbay@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 16:16:44 by berbay            #+#    #+#             */
/*   Updated: 2022/12/30 15:36:44 by berbay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		i2;
	char	*ptr;

	if (!s1 || !s2)
		return (NULL);
	ptr = malloc(sizeof (char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!ptr)
		return (NULL);
	i = 0;
	i2 = 0;
	while (s1[i])
		ptr[i2++] = s1[i++];
	i = 0;
	while (s2[i])
		ptr[i2++] = s2[i++];
	ptr[i2] = '\0';
	return (ptr);
}
