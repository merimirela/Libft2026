/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meivanov <meivanov@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 16:22:11 by meivanov          #+#    #+#             */
/*   Updated: 2026/11/04 17:35:27 by meivanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("Is print? 1 is YES, 0 is NO\n");
		printf("Return: %d\n", ft_isprint(argv[1][0]));
	}
	if ((argc == 2 && argv[1][1] != '\0') || argc != 2)
	{
		printf("Kindly provide a printable caracter");
	}
	return (0);
}
*/