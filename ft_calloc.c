/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bposa <bposa@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 12:55:52 by bposa             #+#    #+#             */
/*   Updated: 2023/11/22 21:05:37 by bposa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*my_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*s;

	s = b;
	i = 0;
	while (i < len)
	{
		s[i] = c;
		i++;
	}
	return (s);
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;
	size_t	total_size;
	size_t	max;

	total_size = count * size;
	max = 4611686014132420609 - 1;
	if (count != 0 && max / count < size)
		return (0);
	p = malloc(total_size);
	if (p == NULL)
		return (NULL);
	my_memset(p, 0, total_size);
	return ((void *)p);
}
