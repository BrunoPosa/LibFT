/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bposa <bposa@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 22:06:23 by bposa             #+#    #+#             */
/*   Updated: 2023/11/06 20:49:04 by bposa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <stddef.h>
# include <string.h>

// size_t	ft_strlen(const char *s);
// void	*ft_memset(void *b, int c, size_t len);
// void	*ft_memcpy(void *dst, const void *src, size_t n);
// int		ft_isprint(int c);
// int		ft_isdigit(int c);
// int		ft_isascii(int c);
// int		ft_isalpha(int c);
// int		ft_isalnum(int c);
void	ft_bzero(void *s, size_t n);

#endif