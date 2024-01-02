/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_utils.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dehamad <dehamad@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 20:54:50 by dehamad           #+#    #+#             */
/*   Updated: 2023/12/31 20:54:52 by dehamad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

const char *decoration = "************************************************************************************************************************";

const char *separator = "============================================================\n";

static void t_decoration(void)
{
  ft_putchar_fd('\n', 1);
  ft_putstr_fd((char *)decoration, 1);
  ft_putchar_fd('\n', 1);
}

static void t_spaces(size_t len, int new_line)
{
  while (len--)
    ft_putchar_fd(' ', 1);
  if (new_line)
    ft_putchar_fd('\n', 1);
}

static void t_sep(int decr_len, int sep_len)
{
  int len = (decr_len - sep_len) / 2;

  t_spaces(len, 0);
  ft_putstr_fd((char *)separator, 1);
  ft_putchar_fd('\n', 1);
}

void t_section(char *test_name)
{
  size_t len = (ft_strlen(decoration) - ft_strlen(test_name)) / 2;

  t_decoration();
  t_spaces(len, 0);
  ft_putstr_fd(test_name, 1);
  t_decoration();
}

void t_note(char *note, int decr_len, int sep_len, int sep)
{
  int len = (decr_len - ft_strlen(note)) / 2;

  if (sep)
    t_sep(decr_len, sep_len);
  t_spaces(len, 0);
  ft_putstr_fd(note, 1);
  ft_putchar_fd('\n', 1);
  t_spaces(len, 0);
  ft_putstr_fd("\n\n", 1);
}

void t_header(char *test, int decr_len)
{
  int len = (decr_len - ft_strlen(test)) / 2;

  t_spaces(len, 0);
  ft_putstr_fd(test, 1);
  ft_putchar_fd('\n', 1);
}

void t_validate(int ft_pf, int pf, int decr_len)
{
  int cpy = pf;
  int res_len;
  int remain_len;

  while (--cpy)
    ft_putchar_fd('-', 1);
  ft_putchar_fd('\n', 1);

  res_len = ft_pf == pf ? printf("%d", ft_pf) : printf("pf = %d, ft_pf = %d", pf, ft_pf);
  remain_len = decr_len - res_len - 1;

  t_spaces(remain_len, 0);
  ft_pf == pf ? printf("%s", ".\n\n") : printf("%s", "X\n\n");
}
