/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bposa <bposa@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 20:19:39 by bposa             #+#    #+#             */
/*   Updated: 2023/12/02 18:19:42 by bposa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needlen;

	needlen = ft_strlen(needle);
	if (*needle == 0)
	{
		return ((char *)haystack);
	}
	while (len > 0 && *(haystack) != '\0')
	{
		if (len >= needlen && ft_strncmp(needle, haystack, needlen) == 0)
		{
			return ((char *)haystack);
		}
		haystack++;
		len--;
	}
	return (NULL);
}
