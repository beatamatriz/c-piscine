/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_reader.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cosorio- <cosorio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 19:27:16 by bbatista          #+#    #+#             */
/*   Updated: 2023/10/08 20:16:29 by cosorio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes.h"

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

char	*read_dict(char *file_path)
{
	int		file;
	int		bytes;
	char	*numbers_dict;

	bytes = file_len(file_path);
	if (bytes == -1)
		return (NULL);
	file = open(file_path, O_RDONLY);
	if (file == -1)
		return (NULL);
	numbers_dict = malloc(bytes * sizeof(char));
	if (numbers_dict == NULL)
		return (NULL);
	bytes = read(file, numbers_dict, bytes);
	if (bytes == -1)
		return (NULL);
	close(file);
	return (numbers_dict);
}
