/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meivanov <meivanov@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/22 21:23:00 by meivanov          #+#    #+#             */
/*   Updated: 2026/11/22 22:56:13 by meivanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
/*
static char	ft_any_function(unsigned int i, char c)
{
	i = 1;
	if (c == ' ')
		return (c);
	else
		c = c + i;
	return (c);
}
*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*result;
	unsigned int	len;
	unsigned int	i;

	i = 0;
	len = ft_strlen(s);
	if (!s || !f)
		return (NULL);
	result = malloc(len * sizeof(char) + 1);
	if (!result)
		return (NULL);
	while (s[i] != '\0')
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}
/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("result: %s\n", ft_strmapi(argv[1], ft_any_function));
	}
	else
	{
		printf("provide a string\n");
		printf("example: ./a.out 'Ldqh hr @VDRNLD'\n");
	}
	return (0);
}
*/