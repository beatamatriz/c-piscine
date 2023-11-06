/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbatista <bbatista@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 17:55:20 by bbatista          #+#    #+#             */
/*   Updated: 2023/10/03 15:47:59 by bbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*skip_space(char *str)
{
	while (!(*str >= '0' && *str <= '9') && *str != '+' && *str != '-')
	{
		if (*str != '\t' && *str != '\n' && *str != '\v'
			&& *str != '\f' && *str != '\r' && *str != ' ')
			return (NULL);
		str++;
	}
	return (str);
}

int	ft_atoi(char *str)
{
	int	n;
	int	sign;

	str = skip_space(str);
	if (!str)
		return (0);
	sign = 1;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	n = 0;
	while (*str >= '0' && *str <= '9')
	{
		n *= 10;
		n += *str - '0';
		str++;
	}
	return (sign * n);
}

int	main(int argn, char *argv[])
{
	int	n;

	if (argn != 2)
	{
		printf("Error\n");
		return (1);
	}
	n = ft_atoi(argv[1]);
	printf("%i\n", n);
	return (0);
}

