/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbatista <bbatista@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 15:14:43 by bbatista          #+#    #+#             */
/*   Updated: 2023/09/28 11:41:45 by bbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	ft_str_is_lowercase(char *str)
{
	int	flag;

	flag = 1;
	while (*str != '\0')
	{
		if (!(*str >= 'a' && *str <= 'z'))
		{
			flag = 0;
		}
		str++;
	}
	return (flag);
}

int	main(void)
{
	char	*good;
	char	*bad;
	int		g_is_lc;
	int		b_is_lc;

	good = "larespuestaescuarentaydos";
	bad = "L";
	g_is_lc = ft_str_is_lowercase(good);
	b_is_lc = ft_str_is_lowercase(bad);
	printf("Good: %i\n", g_is_lc);
	printf("Bad: %i\n", b_is_lc);
	return (0);
}
