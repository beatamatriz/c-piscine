/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbatista <bbatista@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 15:45:33 by bbatista          #+#    #+#             */
/*   Updated: 2023/09/28 12:48:36 by bbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str);

int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= ' ' && *str <= '~'))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

int	main(void)
{
	char	*good;
	char	*bad;
	int		g_is_prt;
	int		b_is_prt;

	good = "La respuesta es$%$$\"665&&&^^^ 42!!!";
	bad = "éñe 	ügüuú õõõõà à ";
	g_is_prt = ft_str_is_printable(good);
	b_is_prt = ft_str_is_printable(bad);
	printf("Good: %i\n", g_is_prt);
	printf("Bad: %i\n", b_is_prt);
	return (0);
}

