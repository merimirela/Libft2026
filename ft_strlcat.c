/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meivanov <meivanov@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 19:22:44 by meivanov          #+#    #+#             */
/*   Updated: 2026/11/06 21:39:10 by meivanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	dest_len;
	size_t	i_src;
	size_t	i_dest;

	src_len = ft_strlen(src);
	dest_len = ft_strlen(dst);
	i_src = 0;
	i_dest = dest_len;
	if (size <= dest_len)
		return (src_len + size);
	while (src[i_src] != '\0' && (size - 1 > i_dest))
	{
		dst[i_dest] = src[i_src];
		i_src++;
		i_dest++;
	}
	dst[i_dest] = '\0';
	return (src_len + dest_len);
}
//in strlcat size is not the number of characters to append. 
//size is the total size of the dst buffer, including '\0'
/*
#include <stdio.h>
#include <bsd/string.h>
int	main(void)
{
	char	dest1[10] = "abcd";
	char	dest2[10] = "abcd";
	char	dest3[10] = "abcd";
	char	dest4[10] = "abcd";
	char	src1[5] = "efgh";
	char	src2[5] = "efgh";
	char	src3[5] = "efgh";
	char	src4[5] = "efgh";
	size_t	size = 8;
	size_t	ret1;
	size_t	ret2;
	size_t	ret3;
	size_t	ret4;

	printf("-----Before-----\n");
	printf("dest: %s, src: %s, size: %zu\n", dest1, src1, size);
	
	//functions cast
	ret1 = strlcat(dest1, src1, size);
	ret2 = ft_strlcat(dest2, src2, size);
	printf("-----After-----\n");
	printf("strlcat   : %zu result: %s\n", ret1, dest1);
	printf("ft_strlcat: %zu result: %s\n", ret2, dest2);
	;
	printf("----- if size is 0 -----\n");
	ret3 = strlcat(dest3, src3, 0);
	ret4 = ft_strlcat(dest4, src4, 0);
	printf("strlcat   : %zu result: %s\n", ret3, dest3);
	printf("ft_strlcat: %zu result: %s\n", ret4, dest4);
	return (0);
}
*/