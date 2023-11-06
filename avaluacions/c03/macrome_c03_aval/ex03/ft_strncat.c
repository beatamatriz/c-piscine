/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbatista <bbatista@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 17:43:11 by bbatista          #+#    #+#             */
/*   Updated: 2023/10/03 19:16:51 by bbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strcmp(char *s1, char *s2);

char	*ft_strncat(char *dest, char *src, unsigned int nb);

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (j < nb && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main(void)
{
	char	src[15] = "42";
	char	dest[24] = "La respuesta es ";
	char	dest2[24] = "La respuesta es ";
	int		cmp;
	
	cmp = ft_strcmp(ft_strncat(dest, src, 4), strncat(dest2, src, 4)); 
	printf("%i - %s\n", cmp, dest);
	printf("0 - %s\n", dest2);
	return (0);
}

