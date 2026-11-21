/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meivanov <meivanov@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/21 17:07:38 by meivanov          #+#    #+#             */
/*   Updated: 2026/11/21 21:48:02 by meivanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	size_t	len;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	result = ft_calloc (len + 1, sizeof(char));
	if (!result)
		return (NULL);
	while (s1[i] != '\0')
	{
		result[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		result[i] = s2[j];
		i++;
		j++;
	}
	return (result);
}

/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	char	*result;
	if (argc == 3)
	{
		result = ft_strjoin(argv[1], argv[2]);
		printf("Result: %s\n", result);
		free (result);
	}
	else
	{
		printf("kindly provide 2 strings\n");
		printf("example ./a.out 'Meri ' 'is great :D'\n");
	}
	return (0);
}
*/