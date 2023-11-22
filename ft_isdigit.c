/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bposa <bposa@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 21:32:49 by bposa             #+#    #+#             */
/*   Updated: 2023/10/27 11:31:15 by bposa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

/*
#include <stdio.h>
#include <ctype.h>

//int	ft_isdigit(int c);

int	main(void)
{
	int	a, b, c, d;
	char	e;
	long	f;
	char	g;

	a = 45;
	b = 54;
	c = -2147483648;
	d = 0;
	e = '\0';
	f = 21474836496;
	g = 'a';
	printf("myf: %d\n", ft_isdigit(a));
	printf("OGf: %d\n\n", isdigit(a));
		printf("myf: %d\n", ft_isdigit(b));
	printf("OGf: %d\n\n", isdigit(b));
		printf("myf: %d\n", ft_isdigit(c));
	printf("OGf: %d\n\n", isdigit(c));
		printf("myf: %d\n", ft_isdigit(d));
	printf("OGf: %d\n\n", isdigit(d));
		printf("myf: %d\n", ft_isdigit(e));
	printf("OGf: %d\n\n", isdigit(e));
		printf("myf: %d\n", ft_isdigit(f));
	printf("OGf: %d\n", isdigit(f));

	return (0);
}
*/
