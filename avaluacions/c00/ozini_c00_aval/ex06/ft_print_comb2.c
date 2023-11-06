/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbatista <bbatista@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 17:52:36 by bbatista          #+#    #+#             */
/*   Updated: 2023/09/24 20:12:16 by bbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	aux_printer(char i, char j, char k, char l);
void	aux_iterator(char *i, char *j, char *k, char *l);
void	ft_print_comb2(void);

void	aux_printer(char i, char j, char k, char l)
{
	if (i != k || j != l)
	{
		write(1, &i, 1);
		write(1, &j, 1);
		write(1, " ", 1);
		write(1, &k, 1);
		write(1, &l, 1);
		write(1, ",", 1);
		write(1, " ", 1);
	}
}

void	aux_iterator(char *i, char *j, char *k, char *l)
{
	if (*j == '9' && *k == '9' && *l == '9')
	{
		i = i + 1;
		j = j - 9;
		k = k - 9;
		l = l - 9;
	}
	else if (*k == '9' && *l == '9')
	{
		j = j + 1;
		k = k - 9;
		l = l - 9;
	}
	else if (*l == '9')
	{
		k = k + 1;
		l = l - 9;
	}
	else
	{
		l = l + 1;
	}
}

void	ft_print_comb2(void)
{
	char	*i;
	char	*j;
	char	*k;
	char	*l;
	char	*end;

	i = "0123456789";
	j = "0123456789";
	k = "0123456789";
	l = "0123456789";
	end = "";
	while (*i != *end)
	{
		write(1, i, 1);
		aux_printer(*i, *j, *k, *l);
		aux_iterator(i, j, k, l);
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
