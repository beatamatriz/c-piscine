/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbatista <bbatista@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 13:31:15 by bbatista          #+#    #+#             */
/*   Updated: 2023/09/25 18:10:36 by bbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str);

int	ft_strlen(char *str)
{
	int		len;
	char	*shame_aux_var;

	shame_aux_var = "";
	len = 0;
	while (*str != *shame_aux_var)
	{
		len++;
		str++;
	}
	return (len);
}

int	main(void)
{
	int		respuesta;
	char	*str;

	str = "We're no strangers to love, you know the r";
	respuesta = ft_strlen(str);
	printf("La respuesta es %d\n", respuesta);
	return (0);
}

