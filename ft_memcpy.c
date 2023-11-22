/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bposa <bposa@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 21:39:42 by bposa             #+#    #+#             */
/*   Updated: 2023/10/30 19:20:10 by bposa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	unsigned char	*d;
	const unsigned char	*s;
	
	d = dst;
	s = src;
	i = 0;
	while (s != '\0' && i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}
