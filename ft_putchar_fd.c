/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meivanov <meivanov@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/22 23:00:01 by meivanov          #+#    #+#             */
/*   Updated: 2026/11/22 23:27:22 by meivanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
#include <fcntl.h>
int	main(void)
{
	int	fd;
	
	ft_putchar_fd('i', 0); //stdin
	ft_putchar_fd('o', 1); //prints to terminal
	ft_putchar_fd('e', 2); //prints to stderr ./a.out 2 > err.txt

	fd = open("test.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	ft_putchar_fd('t', fd);
	return (0);
}
*/