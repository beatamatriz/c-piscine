/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   output_printer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbatista <bbatista@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:37:54 by bbatista          #+#    #+#             */
/*   Updated: 2023/10/12 13:09:57 by bbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libraries.h"

int	str_len(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

void	print_map_error(void)
{
	write(1, "map error\n", 10);
}

void	print_map(char *str)
{
	while (*str != '\n')
	{
		str++;
	}
	str++;
	write(1, str, str_len(str));
}
//TODO: implement fill_square, here?? rename file???
