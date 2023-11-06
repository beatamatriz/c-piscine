/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issanche <issanche@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 13:46:37 by issanche          #+#    #+#             */
/*   Updated: 2023/09/24 17:18:10 by bbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "rush00.h"
#include "rush02.h"
#include "rush04.h"

void	rush_tester(int x, int y)
{
	rush00(x, y);
	rush02(x, y);
	rush04(x, y);
}

int	main(void)
{
	rush_tester(5, 5);
	rush_tester(1, 5);
	rush_tester(5, 1);
	return (0);
}
