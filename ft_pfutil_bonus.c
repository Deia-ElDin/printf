/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pfutil_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dehamad <dehamad@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 22:34:36 by dehamad           #+#    #+#             */
/*   Updated: 2024/01/02 11:42:16 by dehamad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

void	ft_reset_fmt(t_fmt *fmt, char type)
{
	if (type == '0')
	{
		if (fmt->offset < 0)
			fmt->offset = 0;
		if (fmt->pad < 0)
			fmt->pad = 0;
	}
	else if (type == 'r')
	{
		fmt->hashtag = 0;
		fmt->space = 0;
		fmt->plus = 0;
		fmt->pad = 0;
	}
}

void	ft_pfputnbr_base(t_fmt *fmt, long long nbr, int base)
{
	int		sign;
	char	*digits;

	sign = 1;
	digits = "0123456789abcdef";
	if (fmt->upper)
		digits = "0123456789ABCDEF";
	if (nbr < 0)
	{
		ft_putchar_fd('-', 1);
		sign = -1;
	}
	else if (nbr > 0 && fmt->hashtag && fmt->upper)
		ft_putstr_fd("0X", 1);
	else if (nbr > 0 && fmt->hashtag && !fmt->upper)
		ft_putstr_fd("0x", 1);
	else if (fmt->plus)
		ft_putchar_fd('+', 1);
	else if (fmt->space)
		ft_putchar_fd(' ', 1);
	ft_putlchar_fd(fmt->pad, '0', 1);
	ft_reset_fmt(fmt, 'r');
	if (nbr / base)
		ft_pfputnbr_base(fmt, sign * (nbr / base), base);
	ft_putchar_fd(digits[sign * (nbr % base)], 1);
}

/*
	void	init_reset_fmt(t_fmt *fmt, char target)
	{
		if (target == '0')
			the purpose of this if during our calculations for the pad or offset,
			and we decrement any of them to a value below 0,
			that will effect the len, so we need to make sure that they are >= 0.
			
		else if (target == 'r')
			the purpose of this is to rest the flags after applying them in 
			ft_pfputnbr_base, so for the 2nd call, we don't print the leading
			zeros or the spaces twice.
		
	}

	void	ft_pfputnbr_base(t_fmt *fmt, int nbr, int base)
	{
		%[flags][width][.precision][length]specifier
	}
*/
