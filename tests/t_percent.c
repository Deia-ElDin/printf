/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_percent.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dehamad <dehamad@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 20:54:27 by dehamad           #+#    #+#             */
/*   Updated: 2023/12/31 20:54:30 by dehamad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void t_percent(void)
{
  int decr_len = ft_strlen(decoration);

  t_section("Percent Sign");

  t_header("%%", decr_len);
  t_validate(ft_printf("%%.\n"), printf("%%.\n"), decr_len);
}
