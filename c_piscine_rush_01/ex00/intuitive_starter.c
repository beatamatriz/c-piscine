/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intuitive_starter.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbatista <bbatista@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 21:21:15 by bbatista          #+#    #+#             */
/*   Updated: 2023/10/01 21:41:17 by bbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	*starting_positions(int *board, int dim, int i)
{
	while (i < 4 * dim)
	{
		if (i < dim)
		{
			if (board[i + 1] == dim)
				fill_col(i + 1, dim, 1);
			else if (board[i + 1] == 1)
				put_vertical(i + 1, dim, 1);
		}
		else if (i < 2 * dim)
		{
			if (board[(dim + 1) * (dim + 2) + i - dim + 1] == dim)
				fill_col(dim + 1, dim, -1);
			else if (board[(dim + 1) * (dim + 2) + i - dim + 1] == 1)
				put_vertical(dim + 1, dim, -1);
		}
		else if (i < 3 * dim)
		{
			if (board[(i - 2 * dim + 1) * (dim + 2)] == dim)
				fill_row(i - 2 * dim + 1, dim, 1);
			else if (board[(i - 2 * dim + 1) * (dim + 2)] == 1)
				put_horizontal(i - 2 * dim + 1, dim, 1);
		}
		else if (i < 4 * dim)
		{
			if (board[(i - 3 * dim + 1) * (dim + 2) + dim + 1] == dim)
			   fill_row(i - 3 * dim + 1, dim, -1);
			else if (board[(i - 3 * dim + 1) * (dim + 2) + dim + 1] == 1)
				put_horizontal(i - 3 * dim + 1, dim, -1);
		}
		i++;
	}
	return (board);
}
