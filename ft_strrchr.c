/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meivanov <meivanov@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 14:22:10 by meivanov          #+#    #+#             */
/*   Updated: 2026/11/07 14:50:48 by meivanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char) c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}
/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	if (argc == 3 && argv[1][0] != '\0' && argv[2][0] != '\0')
	{
		printf("String index 0: %p\n", (void *)&argv[1][0]);
		printf("last finding c: %p\n", (void *)ft_strrchr(argv[1], argv[2][0]));
	}
	else
	{
		printf("provide a string and a char to be found in that string\n");
		printf("example: ./a.out \"Meri is awesome\" e\n");
	}
	return (0);
}
*/