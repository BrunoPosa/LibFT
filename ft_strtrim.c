/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bposa <bposa@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 13:25:28 by bposa             #+#    #+#             */
/*   Updated: 2023/12/02 18:37:39 by bposa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ch_set_cmp(char c, char const *set)
{
	while (*set != '\0')
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	if (!s1 || !set)
		return (NULL);
	if (*s1 == '\0')
		return (ft_strdup(""));
	i = 0;
	j = ft_strlen(s1) - 1;
	while (s1[i] != '\0' && ch_set_cmp(s1[i], set))
		i++;
	while (j > i && ch_set_cmp(s1[j], set))
		j--;
	return (ft_substr(s1, i, j - i + 1));
}
