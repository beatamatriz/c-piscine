/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbatista <bbatista@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 17:51:01 by bbatista          #+#    #+#             */
/*   Updated: 2023/10/03 19:20:04 by bbatista         ###   ########.fr       */
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
			found = 1;
			while (found && to_find[j] != '\0')
			{
				if (str[i + j] != to_find[j])
					found = 0;
				j++;
			}
		}
		i++;
	}
	if (found)
		return (&str[i - 1]);
	return (NULL);
}

int	main(void)
{
	char *largestring = "hola mundo";
	char *smallstring = "x";
	char *ptr;
	
	ptr = ft_strstr(largestring, smallstring);
	printf("%s\n", ptr);
	ptr = strstr(largestring, smallstring);
	printf("%s\n", ptr);
}

