/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbatista <bbatista@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 17:14:25 by bbatista          #+#    #+#             */
/*   Updated: 2023/09/24 20:56:51 by bbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void);

void	ft_print_numbers(void)
{
	char	nombre;

	nombre = '0';
	while (nombre <= '9')
	{
		write(1, &nombre, 1);
		nombre++;
	}
}

int	main(void)
{
	ft_print_numbers();
	return (0);
}
