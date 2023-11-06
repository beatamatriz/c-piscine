/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbatista <bbatista@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 20:52:59 by bbatista          #+#    #+#             */
/*   Updated: 2023/09/24 21:06:10 by bbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	aux_printer(char i, char j, char k);
void	ft_print_comb(void);

void	aux_printer(char i, char j, char k)
{
	if (i != j && i != k && j != k)
	{
		write(1, &i, 1);
		write(1, &j, 1);
		write(1, &k, 1);
	
		if (i != '7' || j !='8' || k != '9')
		{
			write(1, ",", 1);
			write(1, " ", 1);
		}
	}
}

void	ft_print_comb(void)
{
	char	i;
	char	j;
	char	k;

	i = '0';
	while (i <= '7')
	{
		j = '1';
		while (j <= '8')
		{
			k = '2';
			while (k <= '9')
			{
				aux_printer(i, j, k);
				k++;
			}
			j++;
		}
		i++;
	}
}

int	main(void)
{
	ft_print_comb();
	return (0);
}
