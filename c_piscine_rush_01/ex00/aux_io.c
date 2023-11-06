/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aux_io.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmontes <crmontes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 18:36:28 by crmontes          #+#    #+#             */
/*   Updated: 2023/10/01 19:24:34 by bbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "aux_io.h"
#include <stdio.h>

void	print_error(void)
{
	write(1, "Error\n", 6);
}

void	print_board(int *board, int dim)
{
	int		row;
	int		col;
	char	c;

	row = 1;
	while (row <= dim)
	{
		col = 1;
		while (col <= dim)
		{
			c = '0' + board[row * (dim + 2) + col];
			write(1, &c, 1);
			if (col != dim)
				write(1, " ", 1);
			col++;
		}
		write(1, "\n", 1);
		row++;
	}
}

/*
void	print_full_board(int *board, int dim)
{
	int		row;
	int		col;
	char	c;

	row = 0;
	while (row <= dim + 1)
	{
		col = 0;
		while (col <= dim + 1)
		{
			c = '0' + board[row * (dim + 2) + col];
			write(1, &c, 1);
			if (col != dim)
				write(1, " ", 1);
			col++;
		}
		write(1, "\n", 1);
		row++;
	}
}
*/
int	*get_empty_board(int *board, int dim)
{
	int	i;

	i = 0;
	while (i < (dim + 2) * (dim + 2))
	{
		if (i == 0 || i == dim + 1 || i == (dim + 2) * (dim + 1)
			|| i == (dim + 2) * (dim + 2) - 1)
			board[i] = -1;
		else
			board[i] = 0;
		i++;
	}
	return (board);
}

int	verify_input(char *input)
{
	int	i;
	int	dim;

	dim = 0;
	i = 0;
	while (input[i] != '\0')
	{
		if (i % 2 == 0 && input[i] >= '0' && input[i] <= '9')
			dim++;
		else if (i % 2 == 0 && !(input[i] >= '0' && input[i] <= '9'))
			return (0);
		else if (i % 2 != 0 && input[i] != ' ')
			return (0);
		i++;
	}
	if (dim % 4 != 0)
		return (0);
	return (dim / 4);
}

int	*generate_board(int *board, int dim, char *input)
{
	int		i;

	board = get_empty_board(board, dim);
	i = 0;
	while (*input != '\0')
	{
		if (i < dim)
			board[i + 1] = *input - '0';
		else if (i < 2 * dim)
			board[(dim + 1) * (dim + 2) + i - dim + 1] = *input - '0';
		else if (i < 3 * dim)
			board[(i - 2 * dim + 1) * (dim + 2)] = *input - '0';
		else if (i < 4 * dim)
			board[(i - 3 * dim + 1) * (dim + 2) + dim + 1] = *input - '0';
		i++;
		input += 2;
	}
	return (board);
}
