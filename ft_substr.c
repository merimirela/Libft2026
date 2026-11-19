/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meivanov <meivanov@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 16:54:39 by meivanov          #+#    #+#             */
/*   Updated: 2026/11/18 23:36:48 by meivanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	s_len;
	char	*substr;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	if (len > s_len - start)
		len = s_len - start;
	substr = malloc(len + 1);
	if (!substr)
		return (NULL);
	i = 0;
	while (i < len)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
/*
#include <stdio.h>
int main(int argc, char **argv)
{
    if (argc == 4)
    {
        char    *res;

        res = ft_substr(argv[1], ft_atoi(argv[2]), ft_atoi(argv[3]));
        printf ("Substring: %s", res);
    }
    else
    {
        printf("kindly provide a string, an index number, and a lenght\n");
        printf("Example: ./a.out 'Meri is awesome!' 6 9\n");
    }
    return (0);
}
*/