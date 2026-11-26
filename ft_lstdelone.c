/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meivanov <meivanov@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/26 19:09:16 by meivanov          #+#    #+#             */
/*   Updated: 2026/11/26 19:55:31 by meivanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
/*
#include <stdio.h>
int	main(void)
{
	t_list	*a = ft_lstnew(ft_strdup("A"));
	t_list	*b = ft_lstnew(ft_strdup("B"));
	t_list	*c = ft_lstnew(ft_strdup("C"));

	a->next = b;
	b->next = c;

	a->next = c;		// unlink B so A doesn´t point to freed memory
	ft_lstdelone(b, free);	//deletes only B

	printf("%s -> %s\n", (char *)a->content, (char *)a->next->content); 
	return (0);
}
*/