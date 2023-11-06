/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbatista <bbatista@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 13:21:23 by bbatista          #+#    #+#             */
/*   Updated: 2023/10/12 16:07:56 by bbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 1 || nb == 1)
		return (nb);
	if (nb == 0)
	{
		if (power == 0)
			return (1);
		else
			return (0);
	}
	return (nb * ft_recursive_power(nb, power - 1));
}
/*
int	main(void)
{
	int	nb;
	int	pow;

	nb = -9;
	pow = 2;
	printf("(%i)^%i = %i\n", nb, pow, ft_recursive_power(nb, pow));
}
*/
