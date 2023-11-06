/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbatista <bbatista@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 18:12:48 by bbatista          #+#    #+#             */
/*   Updated: 2023/10/10 11:12:10 by bbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}

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

int	main(int argn, char *argv[])
{
	int		i;
	int		j;
	char	*smallest;

	i = 1;
	while (i < argn)
	{
		smallest = argv[i];
		j = 0;
		while (i + j < argn)
		{
			if (ft_strcmp(smallest, argv[i + j]) > 0)
			{
				smallest = argv[i + j];
				argv[i + j] = argv[i];
				argv[i] = smallest;
			}
			j++;
		}
		i++;
	}
	i = 1;
	while (argn > i)
		ft_putstr(argv[i++]);
	return (0);
}
