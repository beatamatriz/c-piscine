/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbatista <bbatista@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 17:51:13 by bbatista          #+#    #+#             */
/*   Updated: 2023/09/22 12:39:49 by bbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n);

void	ft_is_negative(int n)
{
	char	positiu;
	char	negatiu;

	positiu = 'P';
	negatiu = 'N';
	if (n < 0)
	{
		write(1, &negatiu, 1);
	}
	if (n >= 0)
	{
		write(1, &positiu, 1);
	}
}
/*
int	main(void)
{
	ft_is_negative(42);
	ft_is_negative(-42);
	ft_is_negative(0);
	return (0);
}
*/
