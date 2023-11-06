/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-dlo <jose-dlo@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 12:42:44 by jose-dlo          #+#    #+#             */
/*   Updated: 2023/09/24 16:36:55 by bbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putchar.h"
#include "rush04.h"

void	aux_rush00(int x, int y, int col, int row)
{
	if ((row == 0 || row == y - 1) && (col == 0 || col == x - 1))
	{
		ft_putchar('o');
	}	
	else if (col == 0 || col == x - 1)
	{
		ft_putchar('|');
	}
	else if (row == 0 || row == y - 1)
	{
		ft_putchar('-');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush00(int x, int y)
{
	int		col;
	int		row;

	row = 0;
	while (row < y)
	{
		col = 0;
		while (col < x)
		{
			aux_rush00(x, y, col, row);
			col++;
		}
		write(1, "\n", 1);
		row++;
	}
}
