/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dehamad <dehamad@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 11:13:06 by dehamad           #+#    #+#             */
/*   Updated: 2023/12/30 11:45:23 by dehamad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "print.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, fd);
}

/*
	In Unix-like systems, there are three standard file descriptors
	that are associated with every process by default:
		0 - Standard Input (stdin)
		1 - Standard Output (stdout)
		2 - Standard Error (stderr)
	These standard file descriptors are used for input,
	output, and error messages, respectively.
*/
