/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meivanov <meivanov@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 18:28:35 by meivanov          #+#    #+#             */
/*   Updated: 2026/11/05 15:24:52 by meivanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;

	p = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		p[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char	s1[5] = "Meri";
	char	s2[5] = "Meri";
	int	t1[4] = {0, 1, 2, 3};
	int	t2[4] = {0, 1, 2, 3};	


	printf("-----Before-----\n");
	printf("STRINGS:\n");
	printf("memset   : %s\n", s1);
	printf("ft_memset: %s\n", s2);
	printf("TABS\n");
	printf("memset:    %d, %d, %d, %d\n", t1[0], t1[1], t1[2], t1[3]);
	printf("ft_memset: %d, %d, %d, %d\n", t1[0], t1[1], t1[2], t1[3]);
	//function cast for strings
	memset(s1, '*', 2);
	ft_memset(s2, '*', 2);
	//function cast for tabs
	memset(t1, 0, 2 * (sizeof(int)));
	ft_memset(t2, 0, 2 * (sizeof(int)));
	//
	printf("-----After-----\n");
	printf("STRINGS:\n");
	printf("memset   : %s\n", s1);
	printf("ft_memset: %s\n", s2);
	printf("TABS\n");
	printf("memset:    %d, %d, %d, %d\n", t1[0], t1[1], t1[2], t1[3]);
	printf("ft_memset: %d, %d, %d, %d\n", t1[0], t1[1], t1[2], t1[3]);
	return (0);
}
*/