/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_char.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dehamad <dehamad@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 20:54:14 by dehamad           #+#    #+#             */
/*   Updated: 2023/12/31 20:54:25 by dehamad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

char c = 'A';

static void single_test(char *title, int decr_len)
{
  int len = ft_strlen(title);
  char test[BUFFER_SIZE];

  t_header(title, decr_len);
  ft_strlcpy(test, title, len + 1);
  ft_strlcat(test, ".\n", len + 3);
  t_validate(ft_printf(test, c), printf(test, c), decr_len);
}

static void do_test(char **tests, int decr_len)
{
  while (*tests)
    single_test(*tests++, decr_len);
}

void test_char(void)
{
  int decr_len = ft_strlen(decoration);
  int sep_len = ft_strlen(separator);

  t_section("Char");

  t_note("Testing +/- Alignment && Width = 0", decr_len, sep_len, 0);
  {
    char *tests[] = {"%c", "%+c", "%-c", NULL};
    do_test(tests, decr_len);
  }

  t_note("Testing +/- Alignment && Width = 1", decr_len, sep_len, 0);
  {
    char *tests[] = {"%1c", "%-1c", NULL};
    do_test(tests, decr_len);
  }
  t_note("Testing +/- Alignment && Width > 1", decr_len, sep_len, 0);
  {
    char *tests[] = {"%5c", "%-5c", NULL};
    do_test(tests, decr_len);
  }
}
