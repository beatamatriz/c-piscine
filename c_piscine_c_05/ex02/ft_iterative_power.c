/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbatista <bbatista@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:21:52 by bbatista          #+#    #+#             */
/*   Updated: 2023/10/12 16:06:27 by bbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	nbpow;

	if (power < 0)
		return (0);
	nbpow = 1;
	if (nb == 1)
		return (1);
	while (0 < power--)
		nbpow *= nb;
	return (nbpow);
}
/*
int	main(void)
{
	int	nb;
	int	pronombres;

	nb = -2;
	pronombres = 3;
	printf("(%i)^%i = %i\n", nb, pronombres, ft_iterative_power(nb, pronombres));
}
*/
