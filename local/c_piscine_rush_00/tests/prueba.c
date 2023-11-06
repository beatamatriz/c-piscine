/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prueba.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issanche <issanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 13:46:37 by issanche          #+#    #+#             */
/*   Updated: 2023/09/23 16:28:31 by issanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rush04(int x, int y)
{
	int		row;
	int		col;
	char	a;
	char	b;
	char	c;
	char	salto;
	char	espacio;

	a = 'A';
	b = 'B';
	c = 'C';
	salto = '\n';
	espacio = ' ';
	row = 0;
	while (row < y)
	{
		col = 0;
		while (col < x)
		{
			if ((row == 0 && col == 0) || (row == x - 1 && col == y - 1))
			{
				write(1, &a, 1);
			}
			else if ((row == 0 && col == x - 1) || (row == y - 1 && col == 0))
			{
				write(1, &c, 1);
			}
			else if (row > 0 && col > 0 && row < y - 1 && col < x - 1)
			{
				write(1, &espacio, 1);
			}
			else
			{
				write(1, &b, 1);
			}
			col++;
		}
		ft_putchar(salto);
		row++;
	}
}

int	main(void)
{
	rush04(5, 5);
	return (0);
}
