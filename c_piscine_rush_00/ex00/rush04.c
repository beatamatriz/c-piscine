/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbatista <bbatista@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 13:53:34 by bbatista          #+#    #+#             */
/*   Updated: 2023/09/24 20:47:06 by bbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush04.h"

void	aux_rush04(int x, int y, int col, int row)
{
	if ((row == 0 && col == 0) || (row == y - 1 && col == x - 1))
	{
		ft_putchar('A');
	}
	else if ((row == 0 && col == x - 1) || (row == y - 1 && col == 0))
	{
		ft_putchar('C');
	}
	else if (row > 0 && col > 0 && row < y - 1 && col < x - 1)
	{
		ft_putchar(' ');
	}
	else
	{
		ft_putchar('B');
	}
}

void	rush04(int x, int y)
{
	int		col;
	int		row;

	row = 0;
	while (row < y)
	{
		col = 0;
		while (col < x)
		{
			aux_rush04(x, y, col, row);
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}
