/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issanche <issanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 13:46:37 by issanche          #+#    #+#             */
/*   Updated: 2023/09/24 16:34:11 by bbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	aux_rush02(int x, int y, int col, int row)
{
	if (row == 0 && (col == 0 || col == x - 1))
	{
		ft_putchar('A');
	}
	else if (row == y - 1 && (col == 0 || col == x - 1))
	{
		ft_putchar('C');
	}
	else if (row == 0 || col == 0 || row == y - 1 || col == x - 1)
	{
		ft_putchar('B');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush02(int x, int y)
{
	int		row;
	int		col;

	row = 0;
	while (row < y)
	{
		col = 0;
		while (col < x)
		{
			aux_rush02(x, y, col, row);
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}
