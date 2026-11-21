/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meivanov <meivanov@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/21 17:50:45 by meivanov          #+#    #+#             */
/*   Updated: 2026/11/21 22:24:05 by meivanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	ft_found(char c, char const *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	i;
	char	*result;

	i = 0;
	start = 0;
	end = ft_strlen(s1);
	if (!s1 || !set)
		return (NULL);
	while (s1[start] != '\0' && ft_found(s1[start], set) == 1)
		start++;
	while (end > start && ft_found(s1[end - 1], set) == 1)
		end--;
	result = malloc((end - start) * sizeof(char) + 1);
	if (!result)
		return (NULL);
	while (start < end)
	{
		result[i] = s1[start];
		start++;
		i++;
	}
	result[i] = '\0';
	return (result);
}
/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	char	*result;
	if (argc == 3)
	{
		result = ft_strtrim(argv[1], argv[2]);
		printf("Result: %s\n", result);
		free (result);
	}
	else
	{
		printf("kindly provide 2 strings\n");
		printf("Example: ./a.out '234Hav4e a4 2wonde3rful2 day22432' '234'\n");
	}
	return (0);
}
	*/