/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bposa <bposa@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 12:46:12 by bposa             #+#    #+#             */
/*   Updated: 2023/11/26 00:37:09 by bposa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	malloc_len;

	i = 0;
	malloc_len = 0;
	if (!s)
		return (0);
	if (start > ft_strlen(s) || len == 0 || s[0] == '\0')
	{
		return (ft_strdup(""));
	}
	if (len < ft_strlen(&s[start]))
	{
		malloc_len = len + 1;
	}
	else
	{
		malloc_len = ft_strlen(&s[start]) + 1;
	}
	str = malloc(malloc_len);
	if (!str)
		return (0);
	ft_strlcpy(str, &s[start], malloc_len);
	return (str);
}
