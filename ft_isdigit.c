/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meivanov <meivanov@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 21:02:01 by meivanov          #+#    #+#             */
/*   Updated: 2026/11/02 21:11:41 by meivanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	while (c >= '0' && c <= '9')
		return (1);
	return (0);
}
/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	if (argc == 2 && argv[1][1] == '\0')
	{
		printf("Is digit?? 1 is YES, 0 is NO\n");
		printf("Return: %d\n", ft_isdigit(argv[1][0]));
	}
	if ((argc == 2 && argv[1][1] != '\0') || argc != 2)
	{
		printf("Kindly provide a single character");
	}
	return (0);
}
*/
