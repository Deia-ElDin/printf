/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dehamad <dehamad@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 12:45:33 by dehamad           #+#    #+#             */
/*   Updated: 2024/01/01 13:32:47 by dehamad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

char	*ft_strdup(const char *s1)
{
	char	*dup;
	size_t	slen;

	slen = ft_strlen(s1) + 1;
	dup = (char *)ft_calloc(slen, sizeof(char));
	if (!dup)
		return (NULL);
	ft_strlcpy(dup, s1, slen);
	return (dup);
}
