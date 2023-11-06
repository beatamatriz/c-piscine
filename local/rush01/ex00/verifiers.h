/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verifiers.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbatista <bbatista@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 12:41:31 by bbatista          #+#    #+#             */
/*   Updated: 2023/10/01 19:01:56 by bbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VERIFIERS_H
# define VERIFIERS_H

int	is_repeated(int *board, int row, int col, int dim);

int	check_up(int *board, int col, int dim);

int	check_down(int *board, int col, int dim);

int	check_left(int *board, int row, int dim);

int	check_right(int *board, int row, int dim);

#endif
