/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdios-el <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 22:25:45 by mdios-el          #+#    #+#             */
/*   Updated: 2024/10/07 22:26:08 by mdios-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_format(char const *format, va_list args)
{
	int	count;

	count = 0;
	if (*format == 'c')
		count += ft_putchar(va_arg(args, int));
	else if (*format == 's')
		count += ft_putstr(va_arg(args, char *));
	else if (*format == 'd' || *format == 'i')
		count += ft_putnbr(va_arg(args, int));
	else if (*format == 'u')
		count += ft_putuns_int(va_arg(args, unsigned int));
	else if (*format == 'x')
		count += ft_putnbr_hex(va_arg(args, unsigned int), 0);
	else if (*format == 'X')
		count += ft_putnbr_hex(va_arg(args, unsigned int), 1);
	else if (*format == 'p')
		count += ft_put_point(va_arg(args, void *));
	else
		count += ft_putchar(*format);
	return (count);
}

int	ft_printf(char const *format, ...)
{
	va_list	args;
	int		count;
	int		i;

	va_start(args, format);
	count = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			count += ft_format(&format[i], args);
		}
		else
			count += write(1, &format[i], 1);
		i++;
	}
	va_end(args);
	return (count);
}

/*
int	main(void)
{

	ft_printf("%x %x %x", 10);
	ft_printf("%X\n", 10);
	return 0;
}*/