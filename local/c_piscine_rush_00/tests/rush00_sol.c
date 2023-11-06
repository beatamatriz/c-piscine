/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issanche <issanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 13:46:37 by issanche          #+#    #+#             */
/*   Updated: 2023/09/23 15:22:34 by issanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush04(int x, int y)
{
	int		row;
	int		column;
	char	a;
	char	b;
	char	c;
	char	salto;
    char    espacio;

	a = 'A';
	b = 'B';
	c = 'C';
	salto = '\n';
    espacio = ' ';
	row = 0;
	column = 0;
    
	while (row < y)
	{
		while (column < x)
        {
            if (row = 0 && column = 0 || row = x-1 && column = y-1)
            {
                write (1, &a, 1);
            }
            if (row = 0 && column = x-1 || )
            {
                write (1, &c, 1);
            }
            if ()
            {
                write (1, &b, 1);
            }
            if ()
            {
                write (1, &espacio, 1);
            }
            
        }
        ft_putchar(salto);
	}
}
