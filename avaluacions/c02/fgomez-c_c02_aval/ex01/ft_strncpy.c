/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbatista <bbatista@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 11:50:27 by bbatista          #+#    #+#             */
/*   Updated: 2023/09/28 11:36:37 by bbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char			*tmp;
	unsigned int	i;

	tmp = dest;
	i = 0;
	while (i < n)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
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
	dest = ft_strncpy(&empi[0], str, 18);
	printf("%s\n", dest);
	return (0);
}
