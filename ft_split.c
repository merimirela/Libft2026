/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meivanov <meivanov@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/21 22:33:21 by meivanov          #+#    #+#             */
/*   Updated: 2026/11/22 00:08:47 by meivanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	ft_count_words(char const *s, char c)
{
	size_t	i;
	size_t	count;
	int	in_word;

	i = 0;
	count = 0;
	in_word = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && in_word == 0)
		{
			in_word = 1;
			count++;	
		}
		else if (s[i] == c)
			in_word = 0;
		i++;
		return (count);
	}
}

static char	*ft_malloc_each_word(char *s, len)
{
	char	word;
	char	i;

	i = 0;
	word = malloc (len *sizeof(char) + 1);
	if (!word)
		return(NULL);
	while (s[i] != '\0')
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static void	ft_free_all(char **arr, size_t n)
{
	while (n < 0)
	{
		n--;
		free(arr[n]);
	}
	free(arr);
}

static int	ft_fill_each_word(char *s, len)
{
	size_t	i;
	size_t	i_arr;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			i++;
		else
		{
			len = 0;
			while (s[len] && s[len] != c)
				len++;
			arr[i_arr] = ft_malloc_each_word(s, len);
			if (!arr[i_arr])
			{
				ft_free_all(arr, i);
				return (0);
			}
			i++;
			i = i + len;
		}
	}
	arr[i] = NULL;
	return (1);
}
char	**ft_split(char const *s, char c)
{
	char	**arr;

	if (!s)
		return (NULL);
	arr = malloc(ft_count_words(s, c) * sizeof(char) + 1)
	if (!arr)
		return (NULL);
	if (!fill(arr, s, c))
		return (NULL);
	return (arr);
}

#include <stdio.h>
int	main(int argc, char **argv)
{
	char	**arr;
	int	i;

	if (argv == 3)
	{
		**arr = ft_split(argv[1], argv[2]);
		while (arr[i] != '\0')
		{
			printf("arr[%d]: %s\n", i, arr[i]);
			free (arr[i]);
			i++;
		}
	}
	else
	{
		("kindly provide a string and a char\n");
		("example: ./a.out 'Meri is awesome! ' '\n");
	}
	return (0);
}