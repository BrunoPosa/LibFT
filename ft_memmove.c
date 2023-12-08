/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bposa <bposa@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 17:10:15 by bposa             #+#    #+#             */
/*   Updated: 2023/12/05 15:23:58 by bposa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if (len == 0 || dst == src)
		return (dst);
	if (src < dst)
	{
		while (len > 0)
		{
			((unsigned char *)dst)[len - 1] = ((unsigned char *)src)[len - 1];
			len--;
		}
		return (dst);
	}
	else
	{
		while (len > 0)
		{
			*((unsigned char *)dst + i) = *((unsigned char *)src + i);
			i++;
			len--;
		}
	}
	return (dst);
}
