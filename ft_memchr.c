/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meivanov <meivanov@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 16:38:07 by meivanov          #+#    #+#             */
/*   Updated: 2026/11/07 18:27:00 by meivanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	ch;
	unsigned char	*str;
	size_t			i;

	ch = (unsigned char)c;
	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == ch)
			return (&str[i]);
		i++;
	}
	return (NULL);
}
/*
#include <stdlib.h>
#include <stdio.h>
int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		printf("index 0 : %p\n", &argv[1][0]);
		printf("found at: %p\n", ft_memchr(argv[1], argv[2][0], atoi(argv[3])));
	}
	else
	{
		printf("provide a string, a char, and a size\n");
		printf("Example: ./a.out \"Meri is awesome\" i 4\n");
	}
	return (0);
}		
*/