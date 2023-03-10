/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isrodrig <isrodrig@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 12:45:01 by isrodrig          #+#    #+#             */
/*   Updated: 2023/03/09 16:55:14 by isrodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int							ft_putchar(int c);
int							ft_putnbr(int n);
unsigned int				ft_putnbrbase(unsigned int n, char *base);
int							ft_putstr(char *s);
int							ft_strlen(char *s);
unsigned int				ft_nosign(unsigned int i);
int							ft_putp(unsigned long long i);
int							ft_baselong(unsigned long long n, char *base);
int							ft_printf(const char *s, ...);

#endif
