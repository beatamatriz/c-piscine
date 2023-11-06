/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbatista <bbatista@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 13:49:06 by bbatista          #+#    #+#             */
/*   Updated: 2023/10/12 16:12:02 by bbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	base;
	int	max_base;

	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	if (nb == 4)
		return (2);
	if (nb == 9)
		return (3);
	if (nb == 16)
		return (4);
	base = 5;
	max_base = nb / 5;
	while (base <= max_base && base < 46341)
	{
		if (base * base == nb)
			return (base);
		base++;
	}
	return (0);
}
/*
int	main(int argn, char *argv[])
{
	int	nb;

	if (argn != 2)
		return (1);
	printf("%i\n", ft_sqrt(atoi(argv[1])));
	return (0);
}
*/
