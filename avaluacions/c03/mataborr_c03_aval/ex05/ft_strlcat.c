/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbatista <bbatista@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:22:42 by bbatista          #+#    #+#             */
/*   Updated: 2023/10/02 15:40:42 by bbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	total_size;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0' && j < size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	total_size = i;
	while (j <= size)
	{
		dest[i] = '\0';
		i++;
		j++;
	}
	return (total_size);
}
/*
int	main(void)
{
	char			str1[99] = "La respuesta es ";
	char			str2[99] = "La respuesta es ";
	char			*respuesta;
	unsigned int	_;

	respuesta = "42";
	_ = ft_strlcat(str1, respuesta, 4);
	printf("%i:%s\n", _, str1);
	_ = ft_strlcat(str2, respuesta, 4);
	printf("%i:%s\n", _, str2);
	return (0);
}
*/
