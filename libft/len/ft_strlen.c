/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dehamad <dehamad@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 11:14:22 by dehamad           #+#    #+#             */
/*   Updated: 2023/12/26 14:13:03 by dehamad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "len.h"

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (*s && ++len)
		s++;
	return (len);
}
