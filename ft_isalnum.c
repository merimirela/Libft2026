/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meivanov <meivanov@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 21:19:18 by meivanov          #+#    #+#             */
/*   Updated: 2026/11/03 20:33:09 by meivanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) == 1 || ft_isdigit(c) == 1)
		return (1);
	return (0);
}
/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("Is Alnum? 1 is YES, 0 is NO\n");
		printf("Return: %d\n", ft_isalnum(argv[1][0]));
	}
	if ((argc == 2 && argv[1][1] != '\0') || argc != 2)
	{
		printf("Kindly provide a single character");
	}
	return (0);
}
*/
