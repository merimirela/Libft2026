/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meivanov <meivanov@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/23 20:53:55 by meivanov          #+#    #+#             */
/*   Updated: 2026/11/26 17:02:09 by meivanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
typedef struct s_list
{
	void		*content;
	struct s_list	*next;
} t_list;
*/

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

/*
#include <stdio.h>
#include "libft.h"
int	main(void)
{
	t_list	*head = NULL;
	t_list	*node;

	ft_lstadd_front(&head, ft_lstnew("c"));
	ft_lstadd_front(&head, ft_lstnew("b"));
	ft_lstadd_front(&head, ft_lstnew("a"));
	node = head;
	while (node)
	{
		printf("%s\n", (char *)node->content);
		node = node->next;
	}
	return (0);
}
*/