/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbatista <bbatista@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:29:07 by bbatista          #+#    #+#             */
/*   Updated: 2023/10/12 16:05:45 by bbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	n;
	int	i;

	if (nb < 0)
		return (0);
	n = 1;
	i = 1;
	while (nb >= i++)
	{
		n *= i;
	}
	return (n);
}
/*
int	main(void)
{
	printf("%i\n",ft_iterative_factorial(-3));
	printf("%i\n",ft_iterative_factorial(0));
	printf("%i\n",ft_iterative_factorial(3));	
	return (0);	
}*/
