/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bposa <bposa@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 21:06:37 by bposa             #+#    #+#             */
/*   Updated: 2023/11/30 22:27:19 by bposa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// static char	**free_all(char **s, size_t i);
// static size_t	word_counter(char const *s, char c);
// static void	array_filler(char const *src, char c, char **array);
// char	**ft_split(char const *s, char c);

static size_t	word_counter(char const *s, char c)
{
	size_t	word_count;
	int		word_flag;

	word_flag = 0;
	word_count = 0;
	if (!s) //?
		return (0); // ?
	while (*s)
	{
		if (*s != c && word_flag == 0)
		{
			word_count++;
			word_flag = 1;
		}
		if (*s == c)
			word_flag = 0;
		s++;
	}
	return (word_count);
}

static char	**free_all(char **s, size_t i)
{
	// free((void *)s[i]);
	while (i > 0)
	{
		// i--;
		free((void *)s[--i]);
	}
	// free((void *)s[i]);
	free(s); 			// kako ovo napisati? freeujem array stringova, nakon sto sam freeovao stringove
	return (NULL);
}

static void	array_filler(char const *src, char c, char **array)
{
	size_t	i;
	int		word_flag;

	i = 0;   
	word_flag = 0;
	while (ft_strchr(src, c)) // while not at final word right before the '\0'
	{
		if (*src != c && word_flag == 0)
		{
			word_flag = 1;
			array[i] = (char *)malloc(((ft_strchr(src, c) - src) + 1) * sizeof(char));
			if (!array[i])
				free_all(array, i);
			ft_strlcpy(array[i], src, (ft_strchr(src, c) - src) + 1);
			i++;
		}
		if (*src == c)
			word_flag = 0;
		src++;
	}
	// if (*src != c)
	// {
	array[i] = (char *)malloc((ft_strlen(src) + 1) * sizeof(char));
	if (!array[i])
		free_all(array, i);
	ft_strlcpy(array[i], src, ft_strlen(src) + 1);
	// }
}


char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	i;
	size_t	word_count;

	if (!s)
	{
		return (NULL);
	}
	i = 0;
	word_count = word_counter(s, c);
	arr = malloc((word_count + 1) * sizeof(char *)); // GOT RID OF TYPECASTING (char **)
	if (!arr)
	{
		return (free_all(arr, word_count));
	}
	if (word_count > 0)	// this was missing before, but important!
		array_filler(s, c, arr);
	if (arr[word_count])
		arr[word_count] = 0;
	// if (!*arr)
	// 	return (free_all(arr, word_count));
	return(arr);
}

// int main(void)
// {
// 	size_t	i = 0;
// 	char	c = '|';
// 	char	*str = "|||||";
	
// 	printf("\nword_count:%zu\n", word_counter(str, c));
	
// 	while (i < word_counter(str, c) + 1)
// 	{
// 		printf("%s\n", ft_split(str, c)[i]);
// 		i++;
// 	}
// 	return 0;
// }

// TO DO
//tanja mi skrenula paznju da sam vracao double pointer iz funkcije array_filler kad nisam trebao
//jer sam pozivao array double pointer 'by reference' u argumentu i operirao na njemu iz funkcije, dakle nista ne treba da vracam. 
//Help from David B. for leak troubleshooting, Henri Patsi for shining a light onto the idea of allocating too much
//Oliver H. for noticing exact place where I was allocating too much
//Tanja for helping to rewrite a conditional as well as explaining the operations on arrays by reference
//Ola for troubleshooting and sparring with me from the very beginning, and interrogating my code as well as encouraging. 
//Sunday for sharing his knowledge about a simpler way to count and iterate through words. 
//And Many others including Jarno, Dmitri, Szabina, Pablo, etc for offering help and supporting