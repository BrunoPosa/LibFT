/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bposa <bposa@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 16:07:26 by bposa             #+#    #+#             */
/*   Updated: 2023/11/19 11:34:36 by bposa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <string.h>

static size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dst_length;

	i = ft_strlen(dst);
	j = 0;
	dst_length = ft_strlen(dst);
	if (dst_length > size)
	{
		dst_length = size;
	}
	if (size == 0)
	{
		return (ft_strlen(src));
	}
	while (j < size - dst_length - 1 && src[j] != '\0')
	{
		dst[i++] = src[j++];
	}
	if (size - dst_length >= 1)
	{
		dst[i] = '\0';
	}
	return (dst_length + ft_strlen(src));
}
// int	main(void)
// {
// 	// const char	*s = "hello";
// 	// char	d[15] = "Comoestas";
	
// 	// printf("\nft_strlcat returns: %zu\nd: %s.\nsizeof(d): %zu", ft_strlcat(d, s, sizeof(d)), d, sizeof(d));
// 	// printf("\nstrlen of d: %zu", ft_strlen(d));

// 	// const char	*s2 = "Shops";
// 	// char	d2[5] = "desti";
	
// 	// printf("\n\n2) ft_strlcat returns: %zu\nd2: %s.\nsizeof(d2): %zu", ft_strlcat(d2, s2, sizeof(d2)), d2, sizeof(d2));
// 	// printf("\nstrlen of d2: %zu", ft_strlen(d2));

// 	// const char	*s3 = "abcd";
// 	// char	*d3 = "pqrstuvwxyz";
	
// 	// printf("\n\n3) ft_strlcat returns: %zu\nd3: %s.\nsizeof(d3): %zu", ft_strlcat(d3, s3, 1), d3, sizeof(d3));
// 	// printf("\nstrlen of d3: %zu", ft_strlen(d3));

// 	const char	*s4 = "AAAAAAAAA";
// 	char	d4[30];
// 	memset(d4, 0, 30);
// 	memset(d4, 'B', 4);
	
// 	printf("\n\n4) ft_strlcat returns: %zu\nd4: %s.\nsizeof(d4): %zu", ft_strlcat(d4, s4, 3), d4, sizeof(d4));
// 	printf("\nstrlen of d4: %zu", ft_strlen(d4));
// 	return (0);
// }