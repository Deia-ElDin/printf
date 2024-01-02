/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_ptr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dehamad <dehamad@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 20:54:33 by dehamad           #+#    #+#             */
/*   Updated: 2023/12/31 20:54:35 by dehamad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void test_ptr(void)
{
  int num = 42;
  int *ptr = &num;
  int decr_len = ft_strlen(decoration);

  t_section("Ptr Address");

  t_header("%p", decr_len);
  t_validate(ft_printf("%p.\n", (void *)ptr), printf("%p.\n", (void *)ptr), decr_len);

  t_header("%20p", decr_len);
  t_validate(ft_printf("%20p.\n", (void *)ptr), printf("%20p.\n", (void *)ptr), decr_len);

  t_header("%-20p", decr_len);
  t_validate(ft_printf("%-20p.\n", (void *)ptr), printf("%-20p.\n", (void *)ptr), decr_len);
}
