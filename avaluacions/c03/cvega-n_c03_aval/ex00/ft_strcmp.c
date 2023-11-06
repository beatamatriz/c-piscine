/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbatista <bbatista@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 12:08:45 by bbatista          #+#    #+#             */
/*   Updated: 2023/10/02 18:11:31 by bbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0')
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}	
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
/*
int	main(void)
{
	char	*str_org;
	char	*str_ide;
	char	*str_dif;

	str_org = "La respuesta es 42";
	str_ide = "La respuesta es 42";
	str_dif = "La respuesta es 42q";
	printf("Same: %i\n", ft_strcmp(str_org, str_ide));
	printf("Diff: %i\n", ft_strcmp(str_org, str_dif));	
	printf("Same: %i\n", strcmp(str_org, str_ide));
	printf("Diff: %i\n", strcmp(str_org, str_dif));
	return (0);
}
*/
