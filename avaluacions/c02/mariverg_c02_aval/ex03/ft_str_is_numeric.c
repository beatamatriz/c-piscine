/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbatista <bbatista@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 15:07:36 by bbatista          #+#    #+#             */
/*   Updated: 2023/10/02 14:00:39 by bbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	ft_str_is_numeric(char *str)
{
	int	flag;

	flag = 1;
	while (*str != '\0')
	{
		if (!(*str >= '0' && *str <= '9'))
		{
			return (0);
		}
		str++;
	}
	return (flag);
}

int	main(void)
{
	char	*good;
	char	*bad;
	int		g_is_num;
	int		b_is_num;

	good = "4242424242424242";
	bad = "Larespuesta es 42";
	g_is_num = ft_str_is_numeric(good);
	b_is_num = ft_str_is_numeric(bad);
	printf("Good: %i\n", g_is_num);
	printf("Bad: %i\n", b_is_num);
	return (0);
}

