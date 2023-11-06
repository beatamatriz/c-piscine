/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   output_writers.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cosorio- <cosorio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 19:33:50 by bbatista          #+#    #+#             */
/*   Updated: 2023/10/08 20:16:49 by cosorio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes.h"

void	print_error(void)
{
	write(1, "Error\n", 6);
}

void	print_dict_error(void)
{
	write(1, "Dict Error\n", 11);
}

void	print_number(char *str)
{
	while (*str != '\n' && *str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

void	print_word(char *str[], int size)
{
	int	i;

	i = size - 1;
	while (i >= 0)
	{
		if (str[i] != NULL)
		{
			print_number(str[i]);
			if (i != 0 && (i != 1 || str[0] != NULL))
				write(1, " ", 1);
		}
		i--;
	}
	write(1, "\n", 1);
}
