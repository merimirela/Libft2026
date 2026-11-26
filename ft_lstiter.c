/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meivanov <meivanov@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/26 20:35:23 by meivanov          #+#    #+#             */
/*   Updated: 2026/11/26 21:02:25 by meivanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*
#include <stdio.h>
#include <stdlib.h>
static void	ft_print(void *content)
{
	printf("%s\n", (char *)content);
}

static void	ft_upper(void *content)
{
	char	*s;

	s = (char *)content;
	while (*s)
	{
		*s = ft_toupper(*s);
		s++;
	}
}

int	main(void)
{
	t_list *head = NULL;
	
	ft_lstadd_back(&head, ft_lstnew(ft_strdup("Meri")));
	ft_lstadd_back(&head, ft_lstnew(ft_strdup("is")));
	ft_lstadd_back(&head, ft_lstnew(ft_strdup("awesome!")));
	
	ft_lstiter(head, ft_print);
	ft_lstiter(head, (void *)ft_upper);
	ft_lstiter(head, ft_print);

	ft_lstclear(&head, free);
	return (0);
}

*/