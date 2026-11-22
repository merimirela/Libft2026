/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meivanov <meivanov@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/22 22:39:06 by meivanov          #+#    #+#             */
/*   Updated: 2026/11/22 22:57:32 by meivanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
static void	ft_any_function(unsigned int i, char *c)
{
	i = 1;
	if (*c == ' ')
		return ;
	else
		*c = *c + i;
}
*/
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_striteri(argv[1], ft_any_function);
		printf("result: %s\n", argv[1]);
	}
	else
	{
		printf("provide a string\n");
		printf("example: ./a.out 'Ldqh hr @VDRNLD'\n");
	}
	return (0);
}
*/