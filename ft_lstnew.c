/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meivanov <meivanov@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/23 20:01:29 by meivanov          #+#    #+#             */
/*   Updated: 2026/11/23 20:44:01 by meivanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
/*
typedef struct s_list
{
	void		*content;
	struct s_list	*next;
} t_list;
*/
t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*str;
	t_list	*node;

	str = "Meri is awesome!";
	node = ft_lstnew(str);

	printf("content: %s, %p\n", (char *)node->content, (void *)node->content);
	printf("next   : %p\n", (void *)node->next);
	free(node);
	return (0);
}
*/