/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pfptr_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dehamad <dehamad@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 04:41:34 by dehamad           #+#    #+#             */
/*   Updated: 2023/12/31 15:43:22 by dehamad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

static void	handle_fmt(t_fmt *fmt, int len)
{
	if (fmt->width > len)
		fmt->offset = fmt->width - len;
	fmt->len += fmt->offset + len;
}

static void	handle_print(t_fmt *fmt, void *ptr)
{
	if (!fmt->minus)
		ft_putlchar_fd(fmt->offset, ' ', 1);
	ft_putstr_fd("0x", 1);
	ft_putptr_base_fd(ptr, 16, 1);
	if (fmt->minus)
		ft_putlchar_fd(fmt->offset, ' ', 1);
}

void	ft_pfptr_bonus(t_fmt *fmt)
{
	void	*ptr;
	size_t	len;

	ptr = va_arg(fmt->args, void *);
	len = ft_ptrlen(ptr) + 2;
	if (!ptr)
		handle_fmt(fmt, (int)len + 1);
	else
		handle_fmt(fmt, (int)len);
	handle_print(fmt, ptr);
}

/*
	len = ft_ptrlen(ptr) + 2;
		+2 for the "0x"
	
	if (!ptr)
		handle_fmt(fmt, (int)len + 1);
			(int) so we compare the same data type.
			+1 for the last 0 (0x0).
*/
