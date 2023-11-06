/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbatista <bbatista@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 19:09:03 by bbatista          #+#    #+#             */
/*   Updated: 2023/09/28 11:42:37 by bbatista         ###   ########.fr       */
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
		if (!(*str >= 'A' && *str <= 'Z'))
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
	int		g_is_uc;
	int		b_is_uc;

	good = "LARESPUESTAESCUARENTAYDOS";
	bad = "La respuesta esLARESPUESTAESCUARENTAYDOS";
	g_is_uc = ft_str_is_lowercase(good);
	b_is_uc = ft_str_is_lowercase(bad);
	printf("Good: %i\n", g_is_uc);
	printf("Bad: %i\n", b_is_uc);
	return (0);
}

