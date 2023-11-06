/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbatista <bbatista@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 16:04:57 by bbatista          #+#    #+#             */
/*   Updated: 2023/09/21 17:19:04 by bbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 

void	ft_print_alphabet(void);

void	ft_print_alphabet(void)
{
	char	pobre_diablo;

	pobre_diablo = 'a';
	while (pobre_diablo <= 'z')
	{
		write(1, &pobre_diablo, 1);
		pobre_diablo++;
	}
}

int	main(void)
{
	ft_print_alphabet();
	return 0;
}
