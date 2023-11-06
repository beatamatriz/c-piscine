/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   histogram_algorithm.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cepena-m <cepena-m@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 19:05:12 by cepena-m          #+#    #+#             */
/*   Updated: 2023/10/12 13:36:44 by bbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libraries.h"

int	*generate_histogram(char *map, int width, int height)
{
	int	*histogram_matrix;
	int	row;
	int	col;

	histogram_matrix = (int *) malloc(width * height * sizeof(int));
	while (*map++ != '\n')
		row = 0;
	while (row < height)
	{
		col = 0;
		while (col < width)
		{
			if (map[row * (width + 1) + col] == map[-3])
				histogram_matrix[row * width + col] = 0;
			if (row == 0 && map[col] == map[-4])
				histogram_matrix[col] = 1;
			if (row != 0 && map[row * (width + 1) + col] == map[-4])
				histogram_matrix[row * width + col]
					= histogram_matrix[(row - 1) * width + col] + 1;
			col++;
		}
		row++;
	}
	return (histogram_matrix);
}

int	get_max_square(int *histogram, int position, int width, int height)
{
	int	col;
	int	min_height;
	int	current_width;

	min_height = height;
	current_width = 1;
	col = position % width;
	while (col < width)
	{
		if (histogram[position] < min_height)
			min_height = histogram[position];
		if (current_width > min_height)
			break ;
		current_width++;
		position++;
		col++;
	}
	return (current_width - 1);
}

int	*find_bsq(int *histogram, int width, int height)
{
	int	*posarea;
	int	col;
	int	row;
	int	area;

	posarea = (int *) malloc(2 * sizeof(int));
	if (!posarea)
		exit(1);
	posarea[1] = 0;
	row = -1;
	while (++row < height)
	{
		col = -1;
		while (++col < width)
		{
			area = get_max_square(histogram, row * width + col, width, height);
			if (area > posarea[1])
			{
				posarea[0] = row * width + col;
				posarea[1] = area;
			}
		}
	}
	return (posarea);
}

void	fill_square(char *map, int position, int area, int width)
{
	int		row;
	int		col;
	int		i;
	int		j;

	col = position % width;
	row = position / width;
	while (*map >= '0' && *map <= '9')
		map++;
	map += 4;
	i = 0;
	while (i < area)
	{
		j = 0;
		while (j < area)
		{
			map[(row - i) * (width + 1) + col + j] = map[-2];
			j++;
		}
		i++;
	}
}

//TODO: implement main funtion to solve bsq problem
void	bsq(char *map)
{
	int	width;
	int	height;
	int	*histogram;
	int	*posarea;

	width = get_width(map);
	height = get_height(map);
	histogram = generate_histogram(map, width, height);
	posarea = find_bsq(histogram, width, height);
	if (posarea[1] != 0)
	{
		fill_square(map, posarea[0], posarea[1], width);
		print_map(map);
	}
	else
		print_map_error();
	free(histogram);
	free(posarea);
	free(map);
}
