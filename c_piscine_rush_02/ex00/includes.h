/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   includes.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cosorio- <cosorio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 20:11:53 by cosorio-          #+#    #+#             */
/*   Updated: 2023/10/08 21:31:14 by cosorio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INCLUDES_H
# define INCLUDES_H

# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int		file_len(char *file_path);
char	*read_dict(char *file_path);
char	*verify_line(char *str);
int		str_len(char *str);
int		verify_dict(char *str);
int		verify_number(char *str);
void	print_error(void);
void	print_dict_error(void);
void	print_number(char *str);
void	print_word(char *str[], int size);
char	*skip_zeros(char *str);
int		number_len(char *str);
char	*skip_space(char *str);
char	*find_str(char *str, char *to_find);
char	*get_mils(char *numbers_dict, int tricount);
char	*get_tenths(char *numbers_dict, char u);
char	*get_units(char *numbers_dict, char u);
char	*get_decs(char *numbers_dict, char d);

#endif