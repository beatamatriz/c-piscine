/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dimension_getters.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cepena-m <cepena-m@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 18:27:48 by cepena-m          #+#    #+#             */
/*   Updated: 2023/10/12 10:17:25 by bbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libraries.h"

int	simple_atoi(char *str)
{
	int	n;

	n = 0;
	while (*str != '\0')
	{
		n = n * 10 + *str - '0';
		str++;
	}
	return (n);
}

int	get_width(char *map)
{
	int	col;

	while (*map != '\n')
		map++;
	col = 1;
	while (map[col] != '\n')
		col++;
	return (col - 1);
}

int	get_height(char *map)
{
	char	*str;
	int		i;
	int		j;
	int		height;

	i = 0;
	while (map[i] >= '0' && map[i] <= '9')
		i++;
	str = (char *) malloc(i * sizeof(char));
	j = 0;
	while (j < i)
	{
		str[j] = map[j];
		j++;
	}
	str[j] = '\0';
	height = simple_atoi(str);
	free(str);
	return (height);
}
