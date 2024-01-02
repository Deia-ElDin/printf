/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_uint.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dehamad <dehamad@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 20:54:44 by dehamad           #+#    #+#             */
/*   Updated: 2023/12/31 20:54:46 by dehamad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

unsigned int uNum = 255;

static void single_test(char *title, int decr_len)
{
  int len = ft_strlen(title);
  char test[BUFFER_SIZE];

  t_header(title, decr_len);
  ft_strlcpy(test, title, len + 1);
  ft_strlcat(test, ".\n", len + 3);
  t_validate(ft_printf(test, uNum), printf(test, uNum), decr_len);
}

static void do_test(char **tests, int decr_len)
{
  while (*tests)
    single_test(*tests++, decr_len);
}

void test_uint(void)
{
  int decr_len = ft_strlen(decoration);
  int sep_len = ft_strlen(separator);

  t_section("Unsigned Int");
  {
    char *tests[] = {"%u", "%-u", NULL};
    do_test(tests, decr_len);
  }
  t_note("Testing +/- Alignment", decr_len, sep_len, 1);
  {
    char *tests[] = {"%3u", "%-3u", "%5u", "%-5u", NULL};
    do_test(tests, decr_len);
  }
  t_note("Testing Precision", decr_len, sep_len, 1);
  {
    char *tests[] = {"%.2u", "%-.2u", "%.3u", "%-.3u", "%.4u", "%-.4u", "%.5u", "%-.5u", NULL};
    do_test(tests, decr_len);
  }
  t_note("Testing Width && Precision", decr_len, sep_len, 1);
  {
    char *tests[] = {"%5.2u", "%-5.2u", "%5.3u", "%-5.3u", "%5.4u", "%-5.4u", "%5.5u", "%-5.5u", "%5.6u", "%-5.6u", "%8.7u", "%-8.7u", NULL};
    do_test(tests, decr_len);
  }
  t_note("Testing Leading 0", decr_len, sep_len, 1);
  {
    char *tests[] = {"%01u", "%02u", "%03u", "%04u", "%05u", NULL};
    do_test(tests, decr_len);
  }
  t_note("Testing xX", decr_len, sep_len, 1);
  {
    char *tests[] = {"%x", "%#x", "%X", "%#X", NULL};
    do_test(tests, decr_len);
  }
}
