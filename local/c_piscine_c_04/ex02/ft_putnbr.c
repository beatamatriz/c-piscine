/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbatista <bbatista@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 16:04:40 by bbatista          #+#    #+#             */
/*   Updated: 2023/10/02 17:54:55 by bbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_reverse(char *str, int end)
{
	while (end >= 0)
	{
		write(1, &str[end], 1);
		end--;
	}
}

void	ft_putnbr(int nb)
{
	char	str[12];
	int		i;

	i = 0;
	if (nb == 0)
		write(1, "0", 1);
	else
	{
		if (nb < 0)
		{
			write(1, "-", 1);
			nb *= -1;
		}
		while (nb != 0)
		{
			str[i] = nb % 10 + '0';
			nb /= 10;
			i++;
		}
		ft_putstr_reverse(str, i - 1);
	}
}
/*
int main(void)
{
	ft_putnbr(-32415);
	return (0);
}
*/
