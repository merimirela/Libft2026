/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meivanov <meivanov@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 16:57:33 by meivanov          #+#    #+#             */
/*   Updated: 2026/11/05 21:09:53 by meivanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*p;

	i = 0;
	p = (unsigned char *)s;
	while (i < n)
	{
		p[i] = '\0';
		i++;
	}
}
/*
#include <strings.h>
#include <stdio.h>
int	main(void)
{
	char	s1[5] = "Meri";
	char	s2[5] = "Meri";
	int	n = 2;

	printf("-----Before-----\n");
	printf("bzero   : %c%c%c%c%c, %d\n", s1[0], s1[1], s1[2], s1[3], s1[4], n);
	printf("ft_bzero: %c%c%c%c%c, %d\n", s2[0], s2[1], s2[2], s2[3], s2[4], n);
	//cast functions
	bzero (s1, n);
	ft_bzero(s2, n);
	printf("-----After-----\n");
	printf("bzero   : %c%c%c%c%c, %d\n", s1[0], s1[1], s1[2], s1[3], s1[4], n);
	printf("ft_bzero: %c%c%c%c%c, %d\n", s2[0], s2[1], s2[2], s2[3], s2[4], n);
	return (0);
}
*/