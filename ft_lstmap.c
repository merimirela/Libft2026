/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meivanov <meivanov@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/26 21:14:03 by meivanov          #+#    #+#             */
/*   Updated: 2026/11/26 21:40:27 by meivanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*node;
	void	*content;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		content = f(lst->content);
		node = ft_lstnew(content);
		if (!node)
		{
			del(content);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, node);
		lst = lst->next;
	}
	return (new_list);
}
/*
#include <stdlib.h>
#include <stdio.h>
static void	ft_print(void *content)
{
	printf("%s\n", (char *)content);
}

static void	*ft_upper_dup(void *content)
{
	char	*copy;
	int	i;

	i = 0;
	copy = ft_strdup((char *)content);
	if (!copy)
		return (NULL);
	while (copy[i] != '\0')
	{
		copy[i] = ft_toupper(copy[i]);
		i++;
	}
	return (copy);
}

int	main(void)
{
	t_list	*head = NULL;
	t_list	*mapped;
	
	ft_lstadd_back(&head, ft_lstnew(ft_strdup("Meri")));
	ft_lstadd_back(&head, ft_lstnew(ft_strdup("is")));
	ft_lstadd_back(&head, ft_lstnew(ft_strdup("awesome!")));
	
	mapped = ft_lstmap(head, ft_upper_dup, free);
	
	printf("Original: \n");
	ft_lstiter(head, ft_print);
	printf("New list: \n");
	ft_lstiter(mapped, ft_print);
	
	ft_lstclear(&head, free);
	ft_lstclear(&mapped, free);
	return (0);
}
*/