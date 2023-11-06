/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbatista <bbatista@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 12:46:10 by bbatista          #+#    #+#             */
/*   Updated: 2023/10/01 21:06:46 by bbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "verifiers.h"
#include "aux_io.h"

int	get_empty_position(int *board, int dim)
{
	int	i;

	i = 0;
	while (i < (dim + 2) * (dim + 2))
	{
		if (board[i] == 0)
			break ;
		i++;
	}
	return (i);
}

int	verify(int *board, int position, int dim)
{
	int	row;
	int	col;
	int	so_far_so_good;

	row = position / (dim + 2);
	col = position % (dim + 2);
	so_far_so_good = !is_repeated(board, row, col, dim);
	if (!so_far_so_good)
		return (0);
	so_far_so_good *= check_left(board, row, dim);
	if (!so_far_so_good)
		return (0);
	so_far_so_good *= check_right(board, row, dim);
	if (!so_far_so_good)
		return (0);
	so_far_so_good *= check_up(board, col, dim);
	if (!so_far_so_good)
		return (0);
	so_far_so_good *= check_down(board, col, dim);
	return (so_far_so_good);
}

int	*solve(int *board, int dim)
{
	int	i;
	int	building;

	if (board[dim * (dim + 2) + dim] > 0)
		return (board);
	board[dim * (dim + 2) + dim] = 0;
	i = get_empty_position(board, dim);
	building = dim;
	while (building >= 1)
	{
		board[i] = building;
		if (verify(board, i, dim))
		{	
			board = solve(board, dim);
			if (board[dim * (dim + 2) + dim] != -1)
				return (board);
			else
				board[i] = 0;
		}
		else
			board[i] = 0;
		building--;
	}
	board[dim * (dim + 2) + dim] = -1;
	return (board);
}

int	main(int argn, char *argv[])
{
	int	*board;
	int	dim;

	if (argn != 2)
	{
		print_error();
		return (1);
	}
	dim = verify_input(argv[1]);
	if (dim == 0)
	{
		print_error();
		return (1);
	}
	board = (int *) malloc((dim + 2) * (dim + 2) * sizeof (int));
	board = solve(generate_board(board, dim, argv[1]), dim);
	if (board[dim * (dim + 2) + dim] != -1)
	{
		print_board(board, dim);
		free(board);
		return (0);
	}
	free(board);
	print_error();
	return (1);
}
