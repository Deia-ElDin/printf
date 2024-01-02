/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dehamad <dehamad@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 20:55:05 by dehamad           #+#    #+#             */
/*   Updated: 2023/12/31 20:55:07 by dehamad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_H
#define TEST_H

#include "../libft/libft.h"
#include "../ft_printf_bonus.h"

extern const char *decoration;
extern const char *separator;

#define BUFFER_SIZE 50
#define STRS 20

// Utils
void t_section(char *test_name);
void t_note(char *note, int decr_len, int sep_len, int sep);
void t_header(char *test, int decr_len);
void t_validate(int res1, int res2, int decr_len);

// Tests
void test_char(void);
void test_str(void);
void test_ptr(void);
void test_int(char *sec_name, int num);
void test_uint(void);
void t_percent(void);

#endif
