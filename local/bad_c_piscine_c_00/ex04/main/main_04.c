/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_04.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbatista <bbatista@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 17:51:13 by bbatista          #+#    #+#             */
/*   Updated: 2023/09/21 17:57:24 by bbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n);

void	ft_is_negative(int n)
{
	char pos;
	char neg;

	pos = 'P';
	neg = 'N';
	if (n < 0)
	{
		write(1, &neg, 1);
	}
	if (n >= 0)
	{
		write(1, &pos, 1);
	}
}

int	main(void)
{
	ft_is_negative(5);
	ft_is_negative(-4);
	ft_is_negative(0);
	return 0;
}
