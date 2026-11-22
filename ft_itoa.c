/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meivanov <meivanov@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/22 19:55:14 by meivanov          #+#    #+#             */
/*   Updated: 2026/11/22 21:18:06 by meivanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static	int	ft_count_len(long n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		count++;
		n = -n;
	}
	if (n == 0)
		count++;
	while (n > 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*res;
	long	nb;

	nb = n;
	len = ft_count_len(nb);
	res = malloc(len * sizeof(char) + 1);
	if (!res)
		return (NULL);
	res[len] = '\0';
	if (nb < 0)
	{
		res[0] = '-';
		nb = -nb;
	}
	if (nb == 0)
		res[0] = '0';
	while (nb > 0)
	{
		len--;
		res[len] = nb % 10 + '0';
		nb = nb / 10;
	}
	return (res);
}
/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("test ft_count_len: %d\n", ft_count_len(atoi(argv[1])));
		printf("result: %s\n", ft_itoa(atoi(argv[1])));
	}
	else
	{
		printf("Kindly provide an integer\n");
		printf("example: ./a.out '-1234'\n");
	}
	return (0);
}
*/