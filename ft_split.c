/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bposa <bposa@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 21:06:37 by bposa             #+#    #+#             */
/*   Updated: 2023/11/30 10:12:34 by bposa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// static char	**free_all(char **s, size_t i);
// static size_t	word_counter(char const *s, char c);
// static char	**array_filler(char const *src, char c, char **array);
// char	**ft_split(char const *s, char c);

static size_t	word_counter(char const *s, char c)
{
	size_t	word_count;
	int		word_flag;

	word_flag = 0;
	word_count = 0;
	while (*s)
	{
		if (*s != c && word_flag == 0)
		{
			word_count++;
			word_flag = 1;
		}
		if (*s == c)
			word_flag = 0;
		s++;
	}
	return (word_count);
}

static char	**free_all(char **s, size_t i)
{
	while (i > 0)
	{
		free((void *)s[i]);
		i--;
	}
	free((void *)s[i]);
	free((void **)s);
	return (NULL);
}

static char	**array_filler(char const *src, char c, char **array)
{
	size_t	i;
	int		word_flag;

	i = 0;
	word_flag = 0;
	while (*src) // or maybe (i < word_counter(src, c))
	{
		if (*src != c && word_flag == 0 && ft_strchr(src, c))
		{
			word_flag = 1;
			array[i] = (char *)ft_calloc((ft_strchr(src, c) - src) + 1, sizeof(char));
			if (!array[i])
				return (free_all(array, i));
			ft_strlcpy(array[i], src, (ft_strchr(src, c) - src) + 1);
			i++;
		}
		if (*src != c && word_flag == 0 && !ft_strchr(src, c))
			array[i] = (char *)ft_calloc(ft_strlen(src) + 1, sizeof(char));
		if (*src == c)
			word_flag = 0;
		src++;
	}
	return (array);
}


char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	i;
	size_t	word_count;

	if (!s)
	{
		return (0);
	}
	i = 0;
	word_count = word_counter(s, c);
	arr = (char **)ft_calloc(word_count + 1, sizeof(char *));
	if (!arr)
	{
		return (free_all(arr, i));
	}
	if (!array_filler(s, c, arr)) // || !array_filler(s, c, arr)[word_count - 1]
	{
		return (free_all(arr, i));
	}
	return(arr);
}

// int main(void)
// {
// 	size_t	i = 0;
// 	char	c = '|';
// 	char	*str = "Hello|World|anyone|there|?";
// 	printf("\n word_count:%zu\n", word_counter(str, c));
	
// 	while (i < word_counter(str, c))
// 	{
// 		printf("%s\n", ft_split(str, c)[i]);
// 		i++;
// 	}
// 	return 0; 
// }
// TO DO
//redo the condition for copying last part until end of string in array_filler so to free up lines
//follow double free err 