/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_point.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdios-el <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 23:30:02 by mdios-el          #+#    #+#             */
/*   Updated: 2024/10/14 23:30:20 by mdios-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_point(void *p)
{
	int				count;
	unsigned long	ptr;

	if (p == NULL)
		return (ft_putstr("(nil)"));
	count = 0;
	ptr = (unsigned long)p;
	count += ft_putstr("0x");
	count += ft_putnbr_hex(ptr, 0);
	return (count);
}
