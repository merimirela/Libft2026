/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meivanov <meivanov@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 19:15:31 by meivanov          #+#    #+#             */
/*   Updated: 2026/11/16 20:42:48 by meivanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char	*copy;
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(s);
	copy = malloc((len * sizeof(char)) + 1);
	if (!copy)
		return (NULL);
	while (s[i] != '\0')
	{
		copy[i] = s[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		char	*copy;
		
		printf("Original: %p, %s\n", argv[1], argv[1]);
		copy = ft_strdup(argv[1]);
		if (!copy)
			return (1);
		printf("Copy    : %p, %s\n", copy, copy);
		free (copy);
	}
	else
	{
		printf("Kindly provide 2 arguments\n");
		printf("Example: ./a.out 'Meri'\n");
		return (1);
	}
	return (0);
}
*/