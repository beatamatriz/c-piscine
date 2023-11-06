/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbatista <bbatista@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 16:04:40 by bbatista          #+#    #+#             */
/*   Updated: 2023/10/03 16:26:17 by bbatista         ###   ########.fr       */
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
	char	str[22];
	int		i;

	i = 0;
	if (nb == 0)
		write(1, "0", 1);
	else if (nb == -2147483648)
		write(1, "-2147483648", 11);	
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
int main(void)
{
	ft_putnbr(-2147483648);
	return (0);
}

