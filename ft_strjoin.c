/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bposa <bposa@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 11:35:01 by bposa             #+#    #+#             */
/*   Updated: 2023/12/02 18:11:14 by bposa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joined;
	size_t	s1_len;
	size_t	s2_len;

	if (!s1 || !s2)
	{
		return (NULL);
	}
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	joined = malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (!joined)
	{
		return (NULL);
	}
	ft_strlcpy(joined, s1, s1_len + 1);
	ft_strlcpy(joined + s1_len, s2, s2_len + 1);
	return (joined);
}
