# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dehamad <dehamad@student.42abudhabi.ae>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/26 18:25:45 by dehamad           #+#    #+#              #
#    Updated: 2024/01/02 12:04:40 by dehamad          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# NAME = libftprintf.a

# SOURCES = ft_printf.c ft_pfmand.c
# BSOURCES = ft_printf_bonus.c ft_pfchar_bonus.c ft_pfstr_bonus.c \
# 	ft_pfptr_bonus.c ft_pfint_bonus.c ft_pfuint_bonus.c ft_pfutils_bonus.c \
# 	ft_pfmod_bonus.c
# OBJECTS = $(SOURCES:.c=.o)
# BOBJECTS = $(BSOURCES:.c=.o)
	
# CC = cc
# CFLAGS = -Wall -Wextra -Werror

# all: $(NAME)

# $(NAME): $(OBJECTS)
# 	make -C libft
# 	cp libft/libft.a $(NAME)
# 	$(AR) -rcs $@ $(OBJECTS)

# bonus: $(BOBJECTS) 
# 	make -C libft
# 	cp libft/libft.a $(NAME)
# 	$(AR) -rcs $(NAME) $(BOBJECTS) 

# clean:
# 	rm -f $(OBJECTS) $(BOBJECTS)
# 	make -C libft clean

# fclean: clean
# 	rm -f $(NAME)
# 	make -C libft fclean

# re: fclean all

# .PHONY: all bonus libft clean fclean re

SOURCES = ft_printf.c ft_pfmand.c
BSOURCES = ft_printf_bonus.c ft_pfchar_bonus.c ft_pfstr_bonus.c \
	ft_pfptr_bonus.c ft_pfint_bonus.c ft_pfuint_bonus.c ft_pfutils_bonus.c \
	ft_pfmod_bonus.c
FILES = tests/*.c libft/init/*.c libft/is_x/*.c libft/len/*.c libft/lst/*.c \
libft/mal/*.c libft/mem/*.c libft/num/*.c libft/print/*.c \
libft/str/*.c libft/to_x/*.c

mand:
	@gcc main.c $(SOURCES) $(FILES)
	@./a.out

bonus:
	@gcc main.c $(BSOURCES) $(FILES)
	@./a.out

# make -C libft: 
# Invokes the make command in the libft directory to build the libft library.
# cp libft/libft.a $(NAME): 
# Copies the libft library into the current directory with the name specified by $(NAME).
# $(AR) -rcs $@ $(OBJECTS): 
# Creates the archive (libftprintf.a) using the object files.
