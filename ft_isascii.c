/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meivanov <meivanov@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 15:34:15 by meivanov          #+#    #+#             */
/*   Updated: 2026/11/04 15:46:56 by meivanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("Is Ascii? 1 is YES, 0 is NO\n");
		printf("Return: %d\n", ft_isascii(argv[1][0]));
	}
	if ((argc == 2 && argv[1][1] != '\0') || argc != 2)
	{
		printf("Kindly provide an ascii character");
	}
	return (0);
}
*/