/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bposa <bposa@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 08:34:25 by bposa             #+#    #+#             */
/*   Updated: 2023/11/22 11:56:31 by bposa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	bp_isspace(int c)
{
	char	spaces[7];

	spaces[0] = ' ';
	spaces[1] = '\f';
	spaces[2] = '\n';
	spaces[3] = '\r';
	spaces[4] = '\t';
	spaces[5] = '\v';
	if (c == EOF)
	{
		return (0);
	}
	if (ft_memchr(spaces, c, ft_strlen(spaces)) != 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	ft_atoi(const char *str)
{
	long	num;
	long	sign;

	num = 0;
	sign = 1;
	while (bp_isspace(*str) == 1 && *str != '\0')
		str++;
	if (*str == '-' || *str == '+')
	{
		sign = ',' - *str;
		str++;
	}
	while (ft_isdigit(*str) == 1 && *str != '\0')
	{
		if (num > LONG_MAX / 10 || (num == LONG_MAX / 10 && *str > '7'))
		{
			if (sign == -1)
				return (0);
			return (-1);
		}
		num = num * 10 + *str - '0';
		str++;
	}
	return (num * sign);
}
