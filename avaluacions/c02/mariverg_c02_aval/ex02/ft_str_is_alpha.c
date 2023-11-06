/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbatista <bbatista@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 12:08:20 by bbatista          #+#    #+#             */
/*   Updated: 2023/10/02 13:57:19 by bbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	ft_str_is_alpha(char *str)
{
	int	flag;

	flag = 1;
	while (*str != '\0')
	{
		if (!((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z')))
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
	int		g_is_alpha;
	int		b_is_alpha;

	good = "";
	bad = "Larespuesta es 42";
	g_is_alpha = ft_str_is_alpha(good);
	b_is_alpha = ft_str_is_alpha(bad);	
	printf("Good: %i\n", g_is_alpha);
	printf("Bad: %i\n", b_is_alpha);
	return (0);
}

