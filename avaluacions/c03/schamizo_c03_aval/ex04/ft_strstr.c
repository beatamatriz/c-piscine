/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbatista <bbatista@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 17:51:01 by bbatista          #+#    #+#             */
/*   Updated: 2023/10/12 16:55:02 by bbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (!*to_find)
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		if (str[i] == to_find[j])
		{
			while (str[i + j] == to_find[j] && to_find[j] != '\0')
				j++;
			if (to_find[j] == '\0')
				return (&str[i]);
		}
		i++;
	}
	return (NULL);
}

int	main(void)
{
	char *largestring = "hola mundo";
	char *smallstring = "m";
	char *ptr;
	
	ptr = ft_strstr(largestring, smallstring);
	printf("%s\n", ptr);
	ptr = strstr(largestring, smallstring);
	printf("%s\n", ptr);
}

