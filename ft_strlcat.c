/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bposa <bposa@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 16:07:26 by bposa             #+#    #+#             */
/*   Updated: 2023/11/23 16:26:07 by bposa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_len;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	dst_len = ft_strlen(dst);
	while (i + dst_len + 1 < size && *(src + i) != '\0')
	{
		*(dst + dst_len + i) = *(src + i);
		i++;
	}
	if (dst_len + i < size)
		*(dst + dst_len + i) = '\0';
	if (size < dst_len)
		return (size + ft_strlen(src));
	return (dst_len + ft_strlen(src));
}
