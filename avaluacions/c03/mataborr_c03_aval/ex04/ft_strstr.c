/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbatista <bbatista@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 17:51:01 by bbatista          #+#    #+#             */
/*   Updated: 2023/10/02 15:21:13 by bbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	j;
	int				found;

	found = 0;
	i = 0;
	while (str[i] != '\0' && found == 0)
	{
		j = 0;
		if (str[i] == to_find[j])
		{
			while (to_find[j] != '\0')
			{
				if (str[i] != to_find[j])
					break ;
				j++;
			}
			found = 1;
		}
		i++;
	}
	if (found)
		return (&str[i - 1]);
	else
		return (NULL);
}
/*
int	main(void)
{
	char *largestring = "w34s5ed67tg8hujiokplrejfwioejfwfasfasf";
	char *smallstring = "w";
	char *ptr;
	
	ptr = ft_strstr(largestring, smallstring);
	printf("%s\n", ptr);
	ptr = strstr(largestring, smallstring);
	printf("%s\n", ptr);
}
*/
