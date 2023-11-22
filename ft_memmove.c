/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bposa <bposa@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 17:10:15 by bposa             #+#    #+#             */
/*   Updated: 2023/11/03 21:14:53 by bposa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

// void	*ft_memmove(void *dst, const void *src, size_t len)
// {
// 	if (src < dst)
// 		{
			
// 			return((unsigned char *)dst);
// 		}
// 	else
// 		while(len > 0)
// 		{
			
// 		}
// 	return ((unsigned char *)dst);
// }

int	main(void)
{
	char	destin[] = "aaaaaa";
	const char	*source;
	
	//source = destin - 2;
	printf("destin: %s\n", memmove(destin, source, 3));
	return(0);
}                                                          