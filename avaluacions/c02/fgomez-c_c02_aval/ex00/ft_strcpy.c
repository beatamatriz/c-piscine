/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbatista <bbatista@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 15:42:12 by bbatista          #+#    #+#             */
/*   Updated: 2023/09/28 11:34:01 by bbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

char	*ft_strcpy(char *dest, char *src)
{
	char	*tmp;

	tmp = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	dest = tmp;
	return (dest);
}

int	main(void)
{
	char	*str;
	char	*dest;
	char	empi[18];

	str = "La respuesta es 42";
	dest = ft_strcpy(&empi[0], str);
	printf("%s\n", dest);
	return (0);
}

