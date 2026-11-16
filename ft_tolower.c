/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meivanov <meivanov@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 22:26:56 by meivanov          #+#    #+#             */
/*   Updated: 2026/11/06 22:31:35 by meivanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	return (c);
}
/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	if (argc == 2 && argv[1][1] == '\0' && argv[1][0] != '\0')
	{
		printf("ft_tolower: %c\n", ft_tolower(argv[1][0]));
	}
	else
	{
		printf("provide a single character\n");
		printf("example: ./a.out A\n");
	}
	return (0);
}
	*/