/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meivanov <meivanov@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 21:41:07 by meivanov          #+#    #+#             */
/*   Updated: 2026/11/06 22:29:08 by meivanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}
/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	if (argc == 2 && argv[1][1] == '\0' && argv[1][0] != '\0')
	{
		printf("ft_toupper: %c\n", ft_toupper(argv[1][0]));
	}
	else
	{
		printf("provide a single character\n");
		printf("example: ./a.out a\n");
	}
	return (0);
}
*/