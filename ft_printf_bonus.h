/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dehamad <dehamad@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 18:00:38 by dehamad           #+#    #+#             */
/*   Updated: 2024/01/02 11:42:16 by dehamad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_BONUS_H
# define FT_PRINTF_BONUS_H

# include "libft/libft.h"
# include <stdarg.h>

typedef struct s_fmt
{
	int		len;
	int		width;
	int		offset;
	int		pad;
	int		precision;
	int		dot;
	int		plus;
	int		minus;
	int		zero;
	int		hashtag;
	int		upper;
	int		space;
	va_list	args;
}	t_fmt;

int		ft_printf(const char *format, ...);

void	ft_pfchar_bonus(t_fmt *fmt);
void	ft_pfstr_bonus(t_fmt *fmt);
void	ft_pfptr_bonus(t_fmt *fmt);
void	ft_pfint_bonus(t_fmt *fmt);
void	ft_pfunit_bonus(t_fmt *fmt, int base);
void	ft_pfmod_bonus(t_fmt *fmt);

void	ft_reset_fmt(t_fmt *fmt, char type);
void	ft_pfputnbr_base(t_fmt *fmt, long long nbr, int base);

#endif
