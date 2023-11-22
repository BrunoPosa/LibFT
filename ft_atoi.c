/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bposa <bposa@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 08:34:25 by bposa             #+#    #+#             */
/*   Updated: 2023/11/22 08:18:22 by bposa            ###   ########.fr       */
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
		return(1);
	}
	else
	{
		return (0);
	}
}

int ft_atoi(const char *str)
{
	long	num;
	int	i; 														// use long for easier spotting of overflows? A la Ola
	int	sign;

	num = 0;													//test later for max num values in the num * +-1 in line 48
	i = 0;
	sign = 1;

	while (bp_isspace(str[i]) == 1 && str[i] != '\0')
	{
		i++;
	}
	if(str[i] == '-' || str[i] == '+')
	{
		sign = ',' - str[i]; 							//num is multiplied by 1 or -1 to take the correct sign
		i++;
	}
	while (ft_isdigit(str[i]) == 1 && str[i] != '\0')
	{
		num = num * 10 + str[i] - '0'; 
		i++;
	}
	// if ((num * sign) < INT_MIN || num > INT_MAX)
	// 	return (-1);
	return (num * sign);
}
