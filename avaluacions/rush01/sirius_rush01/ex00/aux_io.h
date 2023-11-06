/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aux_io.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbatista <bbatista@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 13:01:31 by bbatista          #+#    #+#             */
/*   Updated: 2023/10/01 18:58:43 by bbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AUX_IO_H
# define AUX_IO_H
# include <unistd.h>
# include <stdlib.h>

void	print_error(void);

void	print_board(int *board, int dim);

int		*get_empty_board(int *board, int dim);

int		*generate_board(int *board, int dim, char *input);

int		verify_input(char *input);

#endif
