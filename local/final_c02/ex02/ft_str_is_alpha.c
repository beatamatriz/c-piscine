/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbatista <bbatista@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 12:08:20 by bbatista          #+#    #+#             */
/*   Updated: 2023/10/02 15:18:51 by bbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')))
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char	*good;
	char	*bad;
	int		g_is_alpha;
	int		b_is_alpha;

	good = "LaRespuestaEsCuartentaYDos";
	bad = "Larespuesta es 42";
	g_is_alpha = ft_str_is_alpha(good);
	b_is_alpha = ft_str_is_alpha(bad);	
	printf("Good: %i\n", g_is_alpha);
	printf("Bad: %i\n", b_is_alpha);
	return (0);
}
*/
