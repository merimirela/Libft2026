/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meivanov <meivanov@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 18:08:28 by meivanov          #+#    #+#             */
/*   Updated: 2026/11/16 19:13:26 by meivanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (nmemb != 0 && size > SIZE_MAX / nmemb)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}
/*
#include <stdio.h>
int	main(void)
{
	int	*tab;
	int	i;
	int	nmemb;

	i = 0;
	nmemb = 5;
	tab = ft_calloc(nmemb, sizeof(int));
	if (!tab)
		return (1);
	while (i < nmemb)
	{
		printf("tab[%d] = %d\n", i, tab[i]);
		i++;
	}
	free (tab);
	return (0);
}
*/