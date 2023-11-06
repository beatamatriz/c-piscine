/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbatista <bbatista@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 17:43:11 by bbatista          #+#    #+#             */
/*   Updated: 2023/09/28 17:50:34 by bbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < nb && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	while (i < nb)
	{
		dest[i] = '\0';
	}
	return (dest);
}
/*
int	main(void)
{
	char	src[15] = "42536475869708";
	char	dest[17] = "La respuesta es ";
	char	dest2[20] = "La respuesta es ";

	printf("%s\n", ft_strncat(dest, src, 2));
	printf("%s\n", strncat(dest2, src, 2));
	return (0);
}
*/
