/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cosorio- <cosorio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 16:10:21 by bbatista          #+#    #+#             */
/*   Updated: 2023/10/08 21:31:17 by cosorio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes.h"

void	fill_with_null(char *array[])
{
	int	i;

	i = 0;
	while (i < 64)
	{
		array[i] = NULL;
		i++;
	}
}

int	print_written_number(char *dict, char *number, int end)
{
	char	*final_word[64];
	int		position;
	int		i;

	fill_with_null(final_word);
	position = 0;
	i = 0;
	while (end >= 0)
	{
		if (position >= 3 && position % 3 == 0)
		{
			if (number[end] != '0' || number[end - 1] != '0'
				|| number[end - 2] != '0')
					final_word[i] = get_mils(dict, position / 3);
			i += 1;
		}
		if (position % 3 == 0)
			final_word[i] = get_units(dict, number[end]);
		if (position % 3 == 1)
		{
			if (number[end] == '1')
			{
				final_word[i + 1] = get_tenths(dict, number[end + 1]);
				final_word[i] = NULL;
			}
			else
				final_word[i + 1] = get_decs(dict, number[end]);
		}
		if (position % 3 == 2)
		{
			if (number[end] != '0')
				final_word[i + 2] = find_str(dict, "100");
			final_word[i + 3] = get_units(dict, number[end]);
			i += 4;
		}
		end--;
		position++;
	}
	print_word(final_word, 64);
	return (1);
}

int	str_len(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

int	rush02(char *dict_path, char *number)
{
	char	*numbers_dict;
	int		number_len;
	int		success;

	numbers_dict = read_dict(dict_path);
	if (verify_dict(numbers_dict) == 0)
	{
		print_dict_error();
		return (1);
	}
	if (verify_number(number) == 0)
	{
		print_error();
		return (1);
	}
	number = skip_zeros(number);
	number_len = str_len(number);
	success = print_written_number(numbers_dict, number, number_len - 1);
	free(numbers_dict);
	return (success);
}

int	main(int argn, char *argv[])
{
	char	*number;
	char	*dict_path;

	if (argn != 2 && argn != 3)
	{
		print_error();
		return (1);
	}
	if (argn == 2)
	{
		dict_path = "numbers.dict";
		number = argv[1];
	}
	if (argn == 3)
	{
		dict_path = argv[1];
		number = argv[2];
	}
	if (rush02(dict_path, number))
		return (0);
	return (1);
}
