/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_str.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dehamad <dehamad@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 20:54:39 by dehamad           #+#    #+#             */
/*   Updated: 2023/12/31 20:54:41 by dehamad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

char *str = "42 Abu Dhabi!";

static void single_test(char *title, int decr_len)
{
  int len = ft_strlen(title);
  char test[BUFFER_SIZE];

  t_header(title, decr_len);
  ft_strlcpy(test, title, len + 1);
  ft_strlcat(test, ".\n", len + 3);
  t_validate(ft_printf(test, str), printf(test, str), decr_len);
}

static void do_test(char **tests, int decr_len)
{
  while (*tests)
    single_test(*tests++, decr_len);
}

void test_str(void)
{
  int decr_len = ft_strlen(decoration);
  int sep_len = ft_strlen(separator);

  t_section("Str");

  t_note("Testing +/- Alignment", decr_len, sep_len, 0);
  {
    char *tests[] = {"%s", "%+s", "%-s", NULL};
    do_test(tests, decr_len);
  }
  t_note("Testing Width && +/- Alignment", decr_len, sep_len, 1);
  {
    char *tests[] = {"%1s", "%-1s", "%20s", "%-20s", NULL};
    do_test(tests, decr_len);
  }
  t_note("Testing Width && Precision && +/- Alignment", decr_len, sep_len, 1);
  {
    char *tests[] = {"%0.5s", "%-0.5s", "%10.5s", "%-10.5s", "%16.5s", "%-16.5s", NULL};
    do_test(tests, decr_len);
  }
  t_note("Testing Width && Precision > Width", decr_len, sep_len, 1);
  {
    char *tests[] = {"%10.20s", "%-10.20s", NULL};
    do_test(tests, decr_len);
  }
}
