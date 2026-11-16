/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meivanov <meivanov@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 22:26:50 by meivanov          #+#    #+#             */
/*   Updated: 2026/11/06 16:44:52 by meivanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*s;
	unsigned char	*d;

	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	if (dest == src || n == 0)
		return (dest);
	if (src > dest)
		return (ft_memcpy(dest, src, n));
	if (src < dest)
	{
		while (n > 0)
		{
			n--;
			d[n] = s[n];
		}
	}
	return (dest);
}
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char	s1[10] = "Meri";
	char	s2[10] = "Meri";
	char	s3[10] = "Meri";
	char	s4[10] = "Meri";
	char	s5[10] = "Meri";
	char	s6[10] = "Meri";
	size_t		n = 4;	
	
	printf("-----dest same as src-----\n");
	memmove(s1, s1, n);
	ft_memmove(s2, s2, n);
	printf("memmove   : %s, %zu\n", s1, n);
	printf("ft_memmove: %s, %zu\n", s2, n);

	printf("\n--------- n is 0 ---------\n");
	memmove(s1 + 1, s1, 0);
	ft_memmove(s2 + 1, s2, 0);
	printf("memmove   : %s, %zu\n", s1, n);
	printf("ft_memmove: %s, %zu\n", s2, n);

	printf("\n---Overlap , dest before src (buf , buf + 2) ---\n");
	memmove(s3, s3 + 2, n);
	ft_memmove(s4, s4 + 2, n);
	printf("memmove   : %s, %zu\n", s3, n);
	printf("ft_memmove: %s, %zu\n", s4, n);

	printf("\n---Overlap , dest after src (buf + 2, buf) ---\n");
	memmove(s5 + 2, s5, n);
	ft_memmove(s6 + 2, s6, n);
	printf("memmove   : %s, %zu\n", s5, n);
	printf("ft_memmove: %s, %zu\n", s6, n);
	
	return (0);
}
	*/