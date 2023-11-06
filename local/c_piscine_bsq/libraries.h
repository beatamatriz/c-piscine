/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libraries.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cepena-m <cepena-m@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 19:13:16 by cepena-m          #+#    #+#             */
/*   Updated: 2023/10/12 13:39:57 by bbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBRARIES_H
# define LIBRARIES_H

# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

void	print_map_error(void);

void	print_map(char *str);

char	*read_std_in(void);

int		file_len(char *file_path);

char	*read_map(char *file_path);

int		simple_atoi(char *str);

int		get_width(char *map);

int		get_height(char *map);

int		*generate_histogram(char *map, int width, int height);

int		get_max_squared(int *histogram, int position, int width, int height);

void	fill_square(char *map, int position, int area, int width);

int		*find_bsq(int *histogram, int width, int height);

void	bsq(char *map);

#endif
