/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dehamad <dehamad@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 18:00:38 by dehamad           #+#    #+#             */
/*   Updated: 2024/01/02 11:45:31 by dehamad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>

typedef struct s_fmt
{
	int		len;
	int		width;
	int		offset;
	int		upper;
	va_list	args;
}	t_fmt;

int		ft_printf(const char *format, ...);

void	ft_pfchar(t_fmt *fmt, char c);
void	ft_pfstr(t_fmt *fmt);
void	ft_pfptr(t_fmt *fmt);
void	ft_pfint(t_fmt *fmt);
void	ft_pfunit(t_fmt *fmt, int base);

#endif
