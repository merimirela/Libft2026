/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meivanov <meivanov@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/26 15:37:19 by meivanov          #+#    #+#             */
/*   Updated: 2026/11/26 16:18:31 by meivanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	unsigned int	count;

	count = 0;
	while (lst)
	{
		lst = lst->next;
		count++;
	}
	return (count);
}
/*
#include <stdio.h>
int	main(void)
{
	t_list	*head;

	head = NULL;
	printf("Before: %u\n", ft_lstsize(head));
	ft_lstadd_front(&head, ft_lstnew("c"));
	ft_lstadd_front(&head, ft_lstnew("b"));
	ft_lstadd_front(&head, ft_lstnew("a"));
	printf("After : %u\n", ft_lstsize(head));
	return (0);
}
*/