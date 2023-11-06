/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   number_getters.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cosorio- <cosorio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 15:12:42 by bbatista          #+#    #+#             */
/*   Updated: 2023/10/08 20:16:45 by cosorio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes.h"

char	*get_tenths(char *numbers_dict, char u)
{
	char	*name;
	char	*tenth;

	tenth = (char *) malloc(3 * sizeof(char));
	tenth[0] = '1';
	tenth[1] = u;
	tenth[2] = '\0';
	name = find_str(numbers_dict, tenth);
	free(tenth);
	return (name);
}

char	*get_units(char *numbers_dict, char u)
{
	char	*name;
	char	*uni;

	if (u == '0')
		return (NULL);
	uni = (char *) malloc(2 * sizeof(char));
	uni[0] = u;
	uni[1] = '\0';
	name = find_str(numbers_dict, uni);
	free(uni);
	return (name);
}

char	*get_decs(char *numbers_dict, char d)
{
	char	*name;
	char	*dec;

	if (d == '0')
		return (NULL);
	dec = (char *) malloc(3 * sizeof(char));
	dec[0] = d;
	dec[1] = '0';
	dec[2] = '\0';
	name = find_str(numbers_dict, dec);
	free(dec);
	return (name);
}

char	*get_mils(char *numbers_dict, int tricount)
{
	char	*name;
	char	*mil;
	int		i;

	mil = (char *) malloc((tricount * 3 + 2) * sizeof(char));
	mil[0] = '1';
	i = 1;
	while (i <= tricount * 3)
	{
		mil[i] = '0';
		i++;
	}
	mil[i] = '\0';
	name = find_str(numbers_dict, mil);
	free(mil);
	return (name);
}
