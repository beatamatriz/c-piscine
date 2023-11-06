/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbatista <bbatista@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 12:55:56 by bbatista          #+#    #+#             */
/*   Updated: 2023/09/25 16:39:32 by bbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_ft(int *********nbr);

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int	main(void)
{
	int	respuesta;
	int	*r;
	int	**e;
	int	***s;
	int	****p;
	int	*****u;
	int	******t;
	int *******a;
	int	********c;
	int	*********n;

	r = &respuesta;
	e = &r;
	s = &e;
	p = &s;
	u = &p;
	t = &u;
	a = &t;
	c = &a;
	n = &c;
	ft_ultimate_ft(n);
	printf("La respuesta es %d\n", *********n);
	return (0);
}
