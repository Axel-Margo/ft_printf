/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agoram <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 18:52:25 by agoram            #+#    #+#             */
/*   Updated: 2025/11/05 18:52:26 by agoram           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>

int	print_char(char c);
int	print_str(char *s);
int	print_nbr(int n);
int	print_ptr(void *p);
int	print_uns(unsigned int n);
int	print_unstr(unsigned char *s);
int	print_hex(int n);
int	print_longhex(unsigned long n);
int	print_upphex(int n);
#endif
