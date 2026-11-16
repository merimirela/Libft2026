/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meivanov <meivanov@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 21:40:45 by meivanov          #+#    #+#             */
/*   Updated: 2026/11/03 19:39:28 by meivanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("Is Alpha? 1 is YES, 0 is NO\n");
		printf("Return: %d\n", ft_isalpha(argv[1][0]));
	}
	if ((argc == 2 && argv[1][1] != '\0') || argc != 2)
	{
		printf("Kindly provide a single character");
	}
	return (0);
}
*/
