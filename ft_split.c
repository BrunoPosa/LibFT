/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bposa <bposa@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 21:06:37 by bposa             #+#    #+#             */
/*   Updated: 2023/12/02 17:29:03 by bposa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	word_counter(char const *s, char c)
{
	size_t	word_count;
	int		word_flag;

	word_flag = 0;
	word_count = 0;
	if (!s)
	{
		return (0);
	}
	while (*s)
	{
		if (*s != c && word_flag == 0)
		{
			word_count++;
			word_flag = 1;
		}
		if (*s == c)
		{
			word_flag = 0;
		}
		s++;
	}
	return (word_count);
}

static char	**free_all(char **s, size_t i)
{
	while (i > 0)
	{
		i--;
		if (s[i])
		{
			free(s[i]);
		}
	}
	free(s);
	return (NULL);
}

static size_t	word_len(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
	{
		i++;
	}
	return (i);
}

static char	**array_filler(char const *src, char c, char **array)
{
	size_t	i;

	i = 0;
	while (*src)
	{
		while (*src && *src == c)
		{
			src++;
		}
		if (*src && *src != c)
		{
			array[i] = ft_substr(src, 0, word_len(src, c));
			if (!array[i])
			{
				return (free_all(array, i));
			}
			i++;
		}
		src += word_len(src, c);
	}
	array[i] = 0;
	return (array);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	i;
	size_t	word_count;

	if (!s)
	{
		return (NULL);
	}
	i = 0;
	word_count = word_counter(s, c);
	arr = malloc((word_count + 1) * sizeof(char *));
	if (!arr)
	{
		return (NULL);
	}
	return (array_filler(s, c, arr));
}
