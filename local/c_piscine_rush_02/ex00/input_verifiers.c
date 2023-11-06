/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_verifiers.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cosorio- <cosorio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 19:28:47 by bbatista          #+#    #+#             */
/*   Updated: 2023/10/08 20:16:41 by cosorio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes.h"

char	*verify_line(char *str)
{
	if (!(*str >= '0' && *str <= '9'))
		return (NULL);
	while (*str >= '0' && *str <= '9')
		str++;
	while (*str == ' ')
		str++;
	if (*str != ':')
		return (NULL);
	str++;
	while (*str == ' ')
		str++;
	while (*str >= ' ' && *str <= '~')
		str++;
	if (*str == '\n' || *str == '\0')
	{
		str++;
		return (str);
	}
	return (NULL);
}

int	verify_dict(char *str)
{
	while (str && *str != '\0')
		str = verify_line(str);
	return (str != NULL);
}

int	verify_number(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= '0' && *str <= '9'))
			return (0);
		str++;
	}
	return (1);
}
