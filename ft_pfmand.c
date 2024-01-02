/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pfmand.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dehamad <dehamad@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 16:10:50 by dehamad           #+#    #+#             */
/*   Updated: 2024/01/02 11:48:10 by dehamad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_pfchar(t_fmt *fmt, char c)
{
	if (fmt->width > 1)
		fmt->offset = fmt->width - 1;
	fmt->len += fmt->offset + 1;
	ft_putlchar_fd(fmt->offset, ' ', 1);
	ft_putchar_fd(c, 1);
}

void	ft_pfstr(t_fmt *fmt)
{
	char	*str;
	size_t	len;

	str = va_arg(fmt->args, char *);
	if (!str)
		str = "(null)";
	len = ft_strlen(str);
	if (fmt->width > (int)len)
		fmt->offset = fmt->width - (int)len;
	fmt->len += fmt->offset + (int)len;
	ft_putlchar_fd(fmt->offset, ' ', 1);
	ft_putstr_fd(str, 1);
}

void	ft_pfptr(t_fmt *fmt)
{
	void	*ptr;
	size_t	len;

	ptr = va_arg(fmt->args, void *);
	len = ft_ptrlen(ptr) + 2;
	if (!ptr)
		len++;
	if (fmt->width > (int)len)
		fmt->offset = fmt->width - (int)len;
	fmt->len += fmt->offset + (int)len;
	ft_putlchar_fd(fmt->offset, ' ', 1);
	ft_putstr_fd("0x", 1);
	ft_putptr_base_fd(ptr, 16, 1);
}

void	ft_pfint(t_fmt *fmt)
{
	int		nbr;
	size_t	len;

	nbr = va_arg(fmt->args, int);
	len = ft_intlen(nbr);
	if (fmt->width > (int)len)
		fmt->offset = fmt->width - (int)len;
	fmt->len += fmt->offset + (int)len;
	ft_putlchar_fd(fmt->offset, ' ', 1);
	ft_putnbr_fd(nbr, 1);
}

void	ft_pfunit(t_fmt *fmt, int base)
{
	unsigned int	nbr;
	size_t			len;

	nbr = va_arg(fmt->args, unsigned int);
	len = ft_uintlen_base(nbr, base);
	if (fmt->width > (int)len)
		fmt->offset = fmt->width - (int)len;
	fmt->len += fmt->offset + (int)len;
	ft_putlchar_fd(fmt->offset, ' ', 1);
	ft_putnbr_base_fd(nbr, base, fmt->upper, 1);
}
