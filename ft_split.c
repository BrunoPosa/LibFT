/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bposa <bposa@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 21:06:37 by bposa             #+#    #+#             */
/*   Updated: 2023/11/28 09:31:19 by bposa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <stdlib.h>

// static void	free_all(char **arr, size_t i)
// {
// 	while (i > 0)
// 	{
// 		free((void *)arr[i]);
// 		i--;
// 	}
// 	free((void *)arr[i]);
// 	free((void *)*arr);
// }

static size_t	arr_size(char const *s, char c)
{
	size_t	arr_len;
	size_t	i;
	char	*next;

	i = 0;
	if (!s || (*s == '\0' && c != '\0'))
		return (0);
	if (ft_strchr(&s[i], c) == 0)
		return (1);
	arr_len = 0;
	while (ft_strchr(&s[i + 1], c) != NULL)
	{
		next = ft_strchr(&s[i + 1], c);
		if (ft_strchr(&s[i], c) != next - 1)
			arr_len++;
		i += (next - &s[i]);
	}
	if (ft_strlen(&s[i + 1]) != 0)
		arr_len++;
	return (arr_len);
}

// char	**ft_split(char const *s, char c)
// {
// 	char	**arr;
// 	char	*next;
// 	size_t	i;

// 	i = 0;
// 	if (!s)
// 		return (0);
// 	arr = (char **)malloc(arr_size(s, c) + 1);
// 	while (*s != '\0')
// 	{
// 		if (ft_strchr(s + 1, c) != 0)
// 			next = ft_strchr(s + 1, c);
// 		else
// 			next = (char *)s + ft_strlen(s);
// 		arr[i] = ft_substr(s, 0, next - s);
// 		if (!*arr[i])
// 		{
// 			free_all(arr, i);
// 			return (0);
// 		}
// 		i++;
// 		s = next;
// 	}
// 	arr[i + 1] = 0;
// 	return (arr);
// }

int	main(void)
{
	printf("\n%zu words.", arr_size("||hello|||there", '|'));
	printf("\n%zu words.", arr_size("Hello|world|there", '|'));
	return (0);
}
