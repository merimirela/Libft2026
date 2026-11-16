/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meivanov <meivanov@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 20:58:00 by meivanov          #+#    #+#             */
/*   Updated: 2026/11/05 22:25:18 by meivanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	i = 0;
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (!dest && !src)
		return (NULL);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char	src1[5] = "Meme";
	char	src2[5] = "Meme";
	char	dest1[5] = "Riri";
	char	dest2[5] = "Riri";
	size_t	n = 2;	
	
	printf("-----Before-----\n");
	printf("memcpy   : dest: %s, src: %s , %zu\n", dest1, src1, n);
	printf("ft_memcpy: dest: %s, src: %s , %zu\n", dest2, src2, n);
	//cast functions
	memcpy(dest1, src1, n);
	ft_memcpy(dest2, src2, n);
	printf("-----After-----\n");
	printf("memcpy   : dest: %s, src: %s , %zu\n", dest1, src1, n);
	printf("ft_memcpy: dest: %s, src: %s , %zu\n", dest2, src2, n);
	return (0);
}
*/