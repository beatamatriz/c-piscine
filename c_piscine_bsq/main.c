/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbatista <bbatista@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 20:37:14 by bbatista          #+#    #+#             */
/*   Updated: 2023/10/12 13:38:49 by bbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libraries.h"

//TODO: implement main logic and args verification
//TODO: change libraries includes from <> to ""
//TODO: implement (other functions): BSQ & FILL_SQUARE
//TODO: CHECK FREES!!!!!! & Protect all mallocs!
int	main(int argn, char *argv[])
{
	char	*map;
	int		argc;

	if (argn == 1)
	{
		map = read_std_in();
		if (!map)
			print_map_error();
		else
			bsq(map);
	}
	argc = 1;
	while (argc < argn)
	{
		map = read_map(argv[argc]);
		if (!map)
			print_map_error();
		else
			bsq(map);
		argc++;
	}
	return (0);
}
