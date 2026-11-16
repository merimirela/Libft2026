/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meivanov <meivanov@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 16:47:59 by meivanov          #+#    #+#             */
/*   Updated: 2026/11/06 19:21:15 by meivanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (i < size - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
/*
//compile with -lbsd flag from man strlcpy
#include <bsd/string.h>
#include <stdio.h>
int	main(void)
{
	char	src1[5] = "Meri\0";
	char	src2[5] = "Meri\0";
	char	src3[5] = "Meri\0";
	char	src4[5] = "Meri\0";
	char	dest1[11] = "0123456789\0";
	char	dest2[11] = "0123456789\0";
	char	dest3[11] = "0123456789\0";
	char	dest4[11] = "0123456789\0";
	size_t	size = 4;

	printf("-----Before-----\n");
	printf("dest: %s, src: %s, size: %zu\n", dest1, src1, size);
	//finctions cast
	strlcpy(dest2, src2, size);
	ft_strlcpy(dest1, src1, size);
	printf("-----After-----\n");
	printf("strlcpy   : dest: %s, src: %s, size: %zu\n", dest1, src1, size);
	printf("ft_strlcpy: dest: %s, src: %s, size: %zu\n", dest2, src2, size);
	printf("----- if size is 0 -----\n");
	printf("strlcpy   : dest: %s, src: %s, size: %d\n", dest3, src3, 0);
	printf("ft_strlcpy: dest: %s, src: %s, size: %d\n", dest4, src4, 0);
	return (0);
}
*/