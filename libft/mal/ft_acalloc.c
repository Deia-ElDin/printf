/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_acalloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dehamad <dehamad@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 13:29:35 by dehamad           #+#    #+#             */
/*   Updated: 2024/01/02 11:38:24 by dehamad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mal.h"

void	**ft_acalloc(size_t count, size_t size)
{
	void	**ptr;

	if (size && count > (UINT_MAX / size))
		return (NULL);
	ptr = malloc(size * count);
	if (!ptr)
		return (NULL);
	ft_bnull(ptr, count);
	return (ptr);
}
