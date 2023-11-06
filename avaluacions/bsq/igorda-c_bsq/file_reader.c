/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_reader.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cosorio- <cosorio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 19:27:16 by bbatista          #+#    #+#             */
/*   Updated: 2023/10/12 13:53:08 by bbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libraries.h"
/*
int verify_row(char *row)
{
	
}

int	verify_map(char *map)
{
	int	width;
	int	height;
	int	i;

	if (!(*str >= '0' && *str <= '9'))
		return (0);
	width = get_width(map);
	height = get_height(map);
	while (*str >= '0' && *str <= '9')
		str++;
	i = 0;
	while (str[i] >= ' ' && str[i] <= '~')
		i++;
	if (i != 3)
		return (0);
	str += i;
	i = 0;
	while (i < height);

	
}
*/

char	*read_std_in(void)
{
	char	str[4096];
	int		bytes;

	bytes = read(1, str, 4096);
	if (bytes == -1)
		return (NULL);
	str[bytes - 1] = '\0';
	return (read_map(str));
}

int	file_len(char *file_path)
{
	int		file;
	int		len;
	char	*buffer;
	int		bytes_read;

	file = open(file_path, O_RDONLY);
	if (file == -1)
		return (-1);
	buffer = malloc(10 * sizeof(char));
	if (!buffer)
		return (-1);
	bytes_read = 1;
	len = 0;
	while (bytes_read != 0)
	{
		bytes_read = read(file, buffer, 10);
		if (bytes_read == -1)
			return (-1);
		len += bytes_read;
	}
	free(buffer);
	close(file);
	return (len);
}

char	*read_map(char *file_path)
{
	int		file;
	int		bytes;
	char	*map;

	bytes = file_len(file_path);
	if (bytes == -1)
		return (NULL);
	file = open(file_path, O_RDONLY);
	if (file == -1)
		return (NULL);
	map = malloc((bytes + 1) * sizeof(char));
	if (map == NULL)
		return (NULL);
	bytes = read(file, map, bytes);
	if (bytes == -1)
		return (NULL);
	map[bytes] = '\0';
	close(file);
	return (map);
}
