/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bposa <bposa@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 21:06:37 by bposa             #+#    #+#             */
/*   Updated: 2023/11/27 13:04:13 by bposa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <stdlib.h>

static void	free_all(const char **s, size_t i)
{
	while (i > 0)
	{
		free((void *)*s[i]);
		i--;
	}
	free((void *)*s[i]);
	free((void *)*s);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	char	*next;
	size_t	i;

	i = 0;
	while (*s != '\0')
	{
		if (ft_strchr(s + 1, c) != 0)
			next = ft_strchr(s + 1, c);
		else
			next = s + ft_strlen(s);
		*str[i] = ft_substr(s, 0, next - s); 
		if (!*str[i])
		{
			free_all(**str, i);
			return (0);
		}
		i++;
		s = next;
	}
	*str[i + 1] = 0;
	return (**str);
}
