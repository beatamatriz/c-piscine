/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verifiers.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbatista <bbatista@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 10:30:19 by bbatista          #+#    #+#             */
/*   Updated: 2023/10/01 19:02:25 by bbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "verifiers.h"

int	is_repeated(int *board, int row, int col, int dim)
{
	int	i;
	int	j;
	int	building;

	building = board[row * (dim + 2) + col];
	j = 1;
	while (j <= dim)
	{
		if (j != col && board[row * (dim + 2) + j] == building)
			return (1);
		j++;
	}
	i = 1;
	while (i <= dim)
	{
		if (i != row && board[i * (dim + 2) + col] == building)
			return (1);
		i++;
	}
	return (0);
}

int	check_up(int *board, int col, int dim)
{
	int	expected;
	int	visible;
	int	building;
	int	highest;
	int	i;

	expected = board[col];
	visible = 0;
	highest = 0;
	i = 1;
	while (i <= dim)
	{
		building = board[i * (dim + 2) + col];
		if (building == 0)
		{
			return (1);
		}
		if (building > highest)
		{
			highest = building;
			visible++;
		}
		i++;
	}
	return (expected == visible);
}

int	check_down(int *board, int col, int dim)
{
	int	expected;
	int	visible;
	int	building;
	int	highest;
	int	i;

	expected = board[(dim + 1) * (dim + 2) + col];
	highest = 0;
	visible = 0;
	i = dim;
	while (i >= 1)
	{
		building = board [i * (dim + 2) + col];
		if (building == 0)
		{
			return (1);
		}
		if (building > highest)
		{
			highest = building;
			visible++;
		}
		i--;
	}
	return (expected == visible);
}

int	check_left(int *board, int row, int dim)
{
	int	expected;
	int	visible;
	int	building;
	int	highest;
	int	j;

	expected = board[row * (dim + 2)];
	highest = 0;
	visible = 0;
	j = 1;
	while (j <= dim)
	{
		building = board [row * (dim + 2) + j];
		if (building == 0)
		{
			return (1);
		}
		if (building > highest)
		{
			highest = building;
			visible++;
		}
		j++;
	}
	return (expected == visible);
}

int	check_right(int *board, int row, int dim)
{
	int	expected;
	int	visible;
	int	building;
	int	highest;
	int	j;

	expected = board[row * (dim + 2) + dim + 1];
	highest = 0;
	visible = 0;
	j = dim;
	while (j >= 1)
	{
		building = board [row * (dim + 2) + j];
		if (building == 0)
		{
			return (1);
		}
		if (building > highest)
		{
			highest = building;
			visible++;
		}
		j--;
	}
	return (expected == visible);
}
