/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bposa <bposa@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 16:26:31 by bposa             #+#    #+#             */
/*   Updated: 2023/12/02 17:36:11 by bposa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numlen(int n)
{
	int	i;

	if (n == 0)
		return (1);
	i = 1;
	if (n < 0)
		i++;
	while (n / 10 != 0)
	{
		i++;
		n /= 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		num_len;
	long	n_long;

	n_long = (long)n;
	if (n_long == 0)
		return (ft_strdup("0"));
	num_len = ft_numlen(n_long);
	str = (char *)malloc(sizeof(char) * (num_len + 1));
	if (!str)
		return (NULL);
	str[num_len] = '\0';
	if (n_long < 0)
	{
		str[0] = '-';
		n_long = -n_long;
	}
	while (n_long > 0)
	{
		str[num_len - 1] = n_long % 10 + '0';
		num_len--;
		n_long /= 10;
	}
	return (str);
}
