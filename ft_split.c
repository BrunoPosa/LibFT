/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bposa <bposa@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 21:06:37 by bposa             #+#    #+#             */
/*   Updated: 2023/11/26 23:54:48 by bposa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	**ft_split(char const *s, char c)
{
	/*mallocate total amount*/
	/*search delimiting char*/
	/*put substring into index of array - keep putting them in loop*/
	/*free() necessary things*/
	
	char	**arr;
	size_t	i;
	size_t	j;
	char	*temp; // do I need to malloc this?

	i = 0;
	j = 0;
	**arr = (char *)malloc(sizeof(s) + 1);
	while (ft_strchr(&s[i], c) != 0)
	{
		temp = ft_strchr(&s[i], c);
		*arr[j] = ft_substr(&s[i], i, ft_strchr(&s[i + 1], c) - temp); // *arr[0] takes string from s[0] to 1st delimit char,strchr needs 0 check
		j++;
		i++;
	}
	ft_strlcpy(*arr[j], &s[i], ft_strlen(&s[i]));
	*arr[j + 1] = 0;
}
