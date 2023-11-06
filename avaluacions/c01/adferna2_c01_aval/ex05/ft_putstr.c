/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbatista <bbatista@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 13:22:21 by bbatista          #+#    #+#             */
/*   Updated: 2023/09/25 18:09:30 by bbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str);

void	ft_putstr(char *str)
{	
	char	*shame_aux_var;

	shame_aux_var = "";
	while (*str != *shame_aux_var)
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}

int	main(void)
{
	char	*mantra;

	mantra = "La respuesta es 42";
	ft_putstr(mantra);
	return (0);
}
