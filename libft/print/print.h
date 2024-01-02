/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dehamad <dehamad@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 14:06:12 by dehamad           #+#    #+#             */
/*   Updated: 2024/01/02 11:47:48 by dehamad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINT_H
# define PRINT_H

# include "../libft.h"

void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putlchar_fd(size_t len, char c, int fd);
void	ft_putlstr_fd(char *s, size_t len, int fd);
void	ft_putptr_base_fd(void *ptr, int base, int fd);
void	ft_putnbr_base_fd(unsigned int nbr, int base, int uppercase, int fd);

#endif