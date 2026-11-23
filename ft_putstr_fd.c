/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meivanov <meivanov@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/23 14:47:02 by meivanov          #+#    #+#             */
/*   Updated: 2026/11/23 16:52:53 by meivanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}
/*
#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		ft_putstr_fd(argv[1], atoi(argv[2]));
	}
	else
	{
		printf("Provide a string and a positive fd integer\n");
		printf("example: ./a.out 'Meri is Awesome!' '1'\n");
	}
	return (0);
}
*/