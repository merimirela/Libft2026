/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meivanov <meivanov@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 21:31:42 by meivanov          #+#    #+#             */
/*   Updated: 2026/11/16 17:08:56 by meivanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	little_len;

	i = 0;
	little_len = ft_strlen(little);
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] != '\0' && i + little_len <= len)
	{
		if (ft_strncmp(&big[i], little, little_len) == 0)
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char **argv)
{
	char	*res;
	if (argc == 4)
	{
		res = ft_strnstr(argv[1], argv[2], atoi(argv[3]));
		printf("Return: %s\n", res);
		printf("big[0] address: %p\n", (void *)&argv[1][0]);
		printf("found in big? : %p\n", (void *)res);
	}
	else
	{
		printf("Provide two strings and a number\n");
		printf("Example: ./a.out 'Meri is awesome' 'is' 7\n");
	}
	return (0);
}
*/