/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_finder.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cosorio- <cosorio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 19:43:56 by bbatista          #+#    #+#             */
/*   Updated: 2023/10/08 20:17:04 by cosorio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes.h"

char	*skip_space(char *str)
{
	while (*str == ' ')
		str++;
	return (str);
}

char	*find_str(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (!*to_find)
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		if (str[i] == to_find[j])
		{
			while (str[i + j] == to_find[j] && to_find[j] != '\0')
				j++;
			if (to_find[j] == '\0' && !(str[i + j] >= '0' && str[i + j] <= '9')
				&& (i == 0 || str[i - 1] == '\n'))
			{
				str = skip_space(&str[i + j]);
				str++;
				return (skip_space(str));
			}
		}
		i++;
	}
	return (NULL);
}
