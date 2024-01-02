/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_int.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dehamad <dehamad@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 20:54:20 by dehamad           #+#    #+#             */
/*   Updated: 2023/12/31 20:54:22 by dehamad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

unsigned int num = 255;

static void single_test(char *title, int num, int decr_len)
{
  int len = ft_strlen(title);
  char test[BUFFER_SIZE];

  t_header(title, decr_len);
  ft_strlcpy(test, title, len + 1);
  ft_strlcat(test, ".\n", len + 3);
  t_validate(ft_printf(test, num), printf(test, num), decr_len);
}

static void do_test(char **tests, int num, int decr_len)
{
  while (*tests)
    single_test(*tests++, num, decr_len);
}

void test_int(char *sec_name, int num)
{
  int max = 2147483647;
  int min = -2147483648;
  int decr_len = ft_strlen(decoration);
  int sep_len = ft_strlen(separator);

  t_section(sec_name);

  if (num == 0)
  {
    t_note("Testing INT_MAX && INT_MIN", decr_len, sep_len, 0);

    t_header("%d", decr_len);
    t_validate(printf("max= %d, min = %d.\n", max, min), ft_printf("max= %d, min = %d.\n", max, min), decr_len);

    t_header("%i", decr_len);
    t_validate(printf("max= %i, min = %i.\n", max, min), ft_printf("max= %i, min = %i.\n", max, min), decr_len);
  }
  t_note("Testing +/- Alignment", decr_len, sep_len, num ? 0 : 1);
  {
    t_header("%3d", decr_len);
    t_validate(printf("%3d.\n", num), ft_printf("%3d.\n", num), decr_len);

    t_header("%-3d", decr_len);
    t_validate(printf("%-3d.\n", num), ft_printf("%-3d.\n", num), decr_len);

    t_header("%5d", decr_len);
    t_validate(printf("%5d.\n", num), ft_printf("%5d.\n", num), decr_len);

    t_header("%-5d", decr_len);
    t_validate(printf("%-5d.\n", num), ft_printf("%-5d.\n", num), decr_len);
  }
  t_note("Testing Precision", decr_len, sep_len, 1);
  {
    t_header("%.2d", decr_len);
    t_validate(printf("%.2d.\n", num), ft_printf("%.2d.\n", num), decr_len);

    t_header("%-.2d", decr_len);
    t_validate(printf("%-.2d.\n", num), ft_printf("%-.2d.\n", num), decr_len);

    t_header("%.3d", decr_len);
    t_validate(printf("%.3d.\n", num), ft_printf("%.3d.\n", num), decr_len);

    t_header("%-.3d", decr_len);
    t_validate(printf("%-.3d.\n", num), ft_printf("%-.3d.\n", num), decr_len);

    t_header("%.4d", decr_len);
    t_validate(printf("%.4d.\n", num), ft_printf("%.4d.\n", num), decr_len);

    t_header("%-.4d", decr_len);
    t_validate(printf("%-.4d.\n", num), ft_printf("%-.4d.\n", num), decr_len);

    t_header("%.5d", decr_len);
    t_validate(printf("%.5d.\n", num), ft_printf("%.5d.\n", num), decr_len);

    t_header("%-.5d", decr_len);
    t_validate(printf("%-.5d.\n", num), ft_printf("%-.5d.\n", num), decr_len);
  }
  t_note("Testing Width && Precision", decr_len, sep_len, 1);
  {
    t_header("%5.2d", decr_len);
    t_validate(printf("%5.2d.\n", num), ft_printf("%5.2d.\n", num), decr_len);

    t_header("%-5.2d", decr_len);
    t_validate(printf("%-5.2d.\n", num), ft_printf("%-5.2d.\n", num), decr_len);

    t_header("%5.3d", decr_len);
    t_validate(printf("%5.3d.\n", num), ft_printf("%5.3d.\n", num), decr_len);

    t_header("%-5.3d", decr_len);
    t_validate(printf("%-5.3d.\n", num), ft_printf("%-5.3d.\n", num), decr_len);

    t_header("%5.4d", decr_len);
    t_validate(printf("%5.4d.\n", num), ft_printf("%5.4d.\n", num), decr_len);

    t_header("%-5.4d", decr_len);
    t_validate(printf("%-5.4d.\n", num), ft_printf("%-5.4d.\n", num), decr_len);

    t_header("%5.5d", decr_len);
    t_validate(printf("%5.5d.\n", num), ft_printf("%5.5d.\n", num), decr_len);

    t_header("%-5.5d", decr_len);
    t_validate(printf("%-5.5d.\n", num), ft_printf("%-5.5d.\n", num), decr_len);

    t_header("%5.6d", decr_len);
    t_validate(printf("%5.6d.\n", num), ft_printf("%5.6d.\n", num), decr_len);

    t_header("%-5.6d", decr_len);
    t_validate(printf("%-5.6d.\n", num), ft_printf("%-5.6d.\n", num), decr_len);

    t_header("%8.7d", decr_len);
    t_validate(printf("%8.7d.\n", num), ft_printf("%8.7d.\n", num), decr_len);

    t_header("%-8.7d", decr_len);
    t_validate(printf("%-8.7d.\n", num), ft_printf("%-8.7d.\n", num), decr_len);
  }
  t_note("Testing Leading Space", decr_len, sep_len, 1);
  {
    t_header("% d", decr_len);
    t_validate(printf("% d.\n", num), ft_printf("% d.\n", num), decr_len);

    t_header("% 3d", decr_len);
    t_validate(printf("% 3d.\n", num), ft_printf("% 3d.\n", num), decr_len);

    t_header("% 10d", decr_len);
    t_validate(printf("% 10d.\n", num), ft_printf("% 10d.\n", num), decr_len);

    t_header("% 10.5d", decr_len);
    t_validate(printf("% 10.5d.\n", num), ft_printf("% 10.5d.\n", num), decr_len);

    t_header("% -10.5d", decr_len);
    t_validate(printf("% -10.5d.\n", num), ft_printf("% -10.5d.\n", num), decr_len);
  }
  t_note("Testing Leading +", decr_len, sep_len, 1);
  {
    t_header("%+10d", decr_len);
    t_validate(printf("%+10d.\n", num), ft_printf("%+10d.\n", num), decr_len);

    t_header("%-10d", decr_len);
    t_validate(printf("%-10d.\n", num), ft_printf("%-10d.\n", num), decr_len);

    t_header("%+10.5d", decr_len);
    t_validate(printf("%+10.5d.\n", num), ft_printf("%+10.5d.\n", num), decr_len);

    t_header("%-10.5d", decr_len);
    t_validate(printf("%-10.5d.\n", num), ft_printf("%-10.5d.\n", num), decr_len);
  }
  t_note("Testing Leading 0", decr_len, sep_len, 1);
  {
    char *tests[] = {"%01d", "%02d", "%03d", "%04d", "%05d", "%010d", "% 010d", "%+010d", NULL};
    do_test(tests, num, decr_len);
  }
}
