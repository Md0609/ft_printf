/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hex.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdios-el <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 16:14:00 by mdios-el          #+#    #+#             */
/*   Updated: 2024/10/11 16:14:03 by mdios-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_hex(unsigned long nbr, int check)
{
	int		count;
	char	hex;
	char	m_hex;

	count = 0;
	m_hex = "0123456789ABCDEF"[nbr % 16];
	hex = "0123456789abcdef"[nbr % 16];
	if (nbr >= 16)
		count += ft_putnbr_hex(nbr / 16, check);
	if (check == 0)
		count += ft_putchar(hex);
	else
		count += ft_putchar(m_hex);
	return (count);
}
