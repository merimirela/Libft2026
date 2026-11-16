/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meivanov <meivanov@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 22:37:08 by meivanov          #+#    #+#             */
/*   Updated: 2026/11/07 22:38:51 by meivanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if ((char)c == '\0')
		return ((char *)&s[i]);
	return (NULL);
}
/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	if (argc == 3 && argv[1][0] != '\0' && argv[2][0] != '\0')
	{
		printf("String index 0  : %p\n", (void *)&argv[1][0]);
		printf("1st finding of c: %p\n", (void *)ft_strchr(argv[1], argv[2][0]));
	}
	else
	{
		printf("provide a string and a char to be found in that string\n");
		printf("example: ./a.out \"Meri is awesome\" e\n");
	}
	return (0);
}
*/