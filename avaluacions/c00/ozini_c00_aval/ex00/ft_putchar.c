/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbatista <bbatista@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 18:55:50 by bbatista          #+#    #+#             */
/*   Updated: 2023/09/24 21:33:33 by bbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	ft_putchar('e');
	ft_putchar('m');
	ft_putchar(' ');
	ft_putchar('t');
	ft_putchar('o');
	ft_putchar('r');
	ft_putchar('n');
	ft_putchar('a');
	ft_putchar('r');
	ft_putchar('e');
	ft_putchar(' ');
	ft_putchar('b');
	ft_putchar('o');
	ft_putchar('j');
	ft_putchar('a');
}
