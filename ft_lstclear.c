/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meivanov <meivanov@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/26 20:04:55 by meivanov          #+#    #+#             */
/*   Updated: 2026/11/26 20:20:30 by meivanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
}
/*
#include <stdio.h>
#include <stdlib.h>
int	main(void)
{
	t_list	*head = NULL;

	ft_lstadd_back(&head, ft_lstnew(ft_strdup("A")));
	ft_lstadd_back(&head, ft_lstnew(ft_strdup("B")));
	ft_lstadd_back(&head, ft_lstnew(ft_strdup("C")));

	ft_lstclear(&head, free);
	
	printf("%p\n", (void *)head);
	return (0);
}
*/