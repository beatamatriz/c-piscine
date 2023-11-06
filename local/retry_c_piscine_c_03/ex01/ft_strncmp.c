/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbatista <bbatista@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 12:18:08 by bbatista          #+#    #+#             */
/*   Updated: 2023/10/02 18:08:01 by bbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
int	main(void)
{
	char	*str_org;
	char	*str_ide;
	char	*str_dif;

	str_org = "La respuesta es 42";
	str_ide = "La respuesta es 42/aqui_hay_otras_cosas???";
	str_dif = "La respuesta es 47";
	printf("Same: %i\n", ft_strncmp(str_org, str_ide, 23));
	printf("Diff: %i\n", ft_strncmp(str_org, str_dif, 23));
	printf("Same: %i\n", strncmp(str_org, str_ide, 23));
	printf("Diff: %i\n", strncmp(str_org, str_dif, 23));
	return (0);
}
*/
