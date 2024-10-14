/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdios-el <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 17:33:20 by mdios-el          #+#    #+#             */
/*   Updated: 2024/10/10 17:33:23 by mdios-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>
# include <stdarg.h>
# include <stdio.h>
# include <string.h>

int		ft_putchar(char c);
int		ft_putstr(char *str);
int		ft_putuns_int(unsigned int nbr);
int		ft_putnbr(int nbr);
int		ft_printf(char const *format, ...);
int		ft_putnbr_hex(unsigned long nbr, int check);
int		ft_put_point(void *p);

#endif