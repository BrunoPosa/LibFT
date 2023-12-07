/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bposa <bposa@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 21:41:07 by bposa             #+#    #+#             */
/*   Updated: 2023/12/07 22:21:32 by bposa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

int	ft_atoi(const char *s)
{
	long long	sign;
	long long	result;

	sign = 1;
	result = 0;
	while (*s == ' ' || (*s >= 9 && *s <= 13))
		s++;
	if (*s == '-' || *s == '+')
		sign = ',' - *s++;
	while (*s && (*s >= '0' && *s <= '9'))
	{
		if (result > LLONG_MAX / 10
			|| (result == LLONG_MAX / 10 && *s - '0' > LLONG_MAX % 10))
		{
			if (sign == -1)
				return (0);
			return (-1);
		}
		result = result * 10 + *s++ - '0';
	}
	return (sign * result);
}
