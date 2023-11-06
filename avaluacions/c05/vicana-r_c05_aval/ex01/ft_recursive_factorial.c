/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbatista <bbatista@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 18:19:30 by bbatista          #+#    #+#             */
/*   Updated: 2023/10/12 19:20:23 by bbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (1);
	if (nb > 0)
		return (nb * ft_recursive_factorial(nb - 1));
	return (0);
}

int	main(void)
{
        printf("%i\n",ft_recursive_factorial(-3));
        printf("%i\n",ft_recursive_factorial(0));
        printf("%i\n",ft_recursive_factorial(3));
        return (0);
}

