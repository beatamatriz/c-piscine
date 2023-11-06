/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbatista <bbatista@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 20:03:12 by bbatista          #+#    #+#             */
/*   Updated: 2023/09/28 16:25:25 by bbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strlowcase(char *str);

char	*ft_strcapitalize(char *str);

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	cap;
	int	i;

	str = ft_strlowcase(str);
	cap = 1;
	i = 0;
	printf("%s\n", str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{	
			if (cap)
				str[i] -= 32;
			cap = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			cap = 0;
		else
			cap = 1;
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	str[] = "esto es horripilante Es !!LLL Aa aA!!";
	printf("%s\n", str);
	printf("%s\n", ft_strcapitalize(str));
	return (0);
}
*/
