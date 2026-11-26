/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meivanov <meivanov@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/26 16:21:03 by meivanov          #+#    #+#             */
/*   Updated: 2026/11/26 16:49:24 by meivanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
/*
#include <stdio.h>
int	main(void)
{
	t_list	*a = ft_lstnew("A");
	t_list	*b = ft_lstnew("B");
	t_list	*c = ft_lstnew("C");

	a->next = b;
	b->next = c;

	printf("%s\n", (char *)ft_lstlast(a)->content);
	printf("%p\n", ft_lstlast(NULL));
	return (0);
}
*/