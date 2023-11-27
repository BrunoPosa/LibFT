/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bposa <bposa@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 21:06:37 by bposa             #+#    #+#             */
/*   Updated: 2023/11/27 15:25:51 by bposa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <stdlib.h>

static void	free_all(char **s, size_t i)
{
	while (i > 0)
	{
		free((void *)s[i]);
		i--;
	}
	free((void *)s[i]);
	free((void *)*s);
}

static size_t	arr_size(char const *s, char c)
{
	size_t	arr_size;
	size_t	i;
	char	*next;

	arr_size = 0;
	i = 0;
	if (ft_strchr(&s[i], c) == 0)
		return (1);
	while (ft_strchr(&s[i + 1], c) != 0)
	{
		next = ft_strchr(&s[i + 1], c);
		if (ft_strchr(&s[i], c))
			arr_size++;
		i = next - &s[i];
	}
	return(arr_size);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	char	*next;
	size_t	i;

	i = 0;
	arr = (char *)malloc(arr_size(s, c) + 1);
	while (*s != '\0')
	{
		if (ft_strchr(s + 1, c) != 0)
			next = ft_strchr(s + 1, c);
		else
			next = (char *)s + ft_strlen(s);
		arr[i] = ft_substr(s, 0, next - s);
		if (!*arr[i])
		{
			free_all(arr, i);
			return (0);
		}
		i++;
		s = next;
	}
	arr[i + 1] = 0;
	return (arr);
}
