/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meivanov <meivanov@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/21 22:33:21 by meivanov          #+#    #+#             */
/*   Updated: 2026/11/22 17:25:02 by meivanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	ft_count_words(char const *s, char c)
{
	size_t	i;
	size_t	words_count;
	int	in_word;
	
	i = 0;
	in_word = 0;
	words_count = 0;
	while (s[i] != '\0')
	{
		if(s[i] != c && in_word != 1)
		{
			in_word = 1;
			words_count++;
		}
		else if (s[i] == c)
			in_word = 0;
		i++; 
	}
	return (words_count);
}

static char	*ft_malloc_fill_word(char const *s, size_t len)
{
	size_t	i;
	char	*word;

	i = 0;
	word = malloc(len * sizeof(char) + 1);
	if (!word)
		return (NULL);
	while(i < len)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static void	ft_free_all(char **arr, size_t n)
{
	while (n > 0)
	{
		n--;
		free(arr[n]);
	}
	free(arr);
}

//fills **arr slots, returns 0 if any fail, 1 if **arr created successfully
static int	ft_fill_pp_arr(char **arr, char const *s, char c)
{
	size_t	arr_slot;
	size_t	len;
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != c)
		{
			len = 0;
			while (s[i] != c)
			{
				i++;
				len++;
			}
			arr[arr_slot] = ft_malloc_fill_word(s, len);
			if (!arr[arr_slot])
			{
				ft_free_all(arr, arr_slot);
				return (0);
			}
			arr_slot++;
			i = i + len;
		}
		i++;
	}
	arr[arr_slot] = '\0';
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;

	if (!s)
		return (NULL);
	arr = malloc(ft_count_words(s, c) * sizeof(char) + 1);
	if (!arr)
		return (NULL);
	arr = ft_fill_pp_arr(arr, s, c);
	if (!arr)
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
/*
// Main for additional test functions
#include <stdio.h>
int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("number of words : %zu\n", ft_count_words((argv[1]), argv[2][0]));
		printf("Malloc_fill_word: %s\n", ft_malloc_fill_word((&argv[1][2]), 4));
	}
	else
		printf("./a.out '  Meri   is awesome!    ' ' '\n");
	return (0);
}
*/
