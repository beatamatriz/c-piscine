/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbatista <bbatista@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 13:17:22 by bbatista          #+#    #+#             */
/*   Updated: 2023/09/25 13:21:18 by bbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *a / *b;
	*b = tmp % *b;
}
/*
int	main(void)
{
	int	cuatro;
	int	dos;

	cuatro = 18;
	dos = 4;
	ft_ultimate_div_mod(&cuatro, &dos);
	printf("La respuesta es %d%d\n", cuatro, dos);
	return (0);
}
*/
