# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dehamad <dehamad@student.42abudhabi.ae>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/25 03:20:29 by dehamad           #+#    #+#              #
#    Updated: 2024/01/02 11:52:44 by dehamad          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC_DIR = init is_x len lst mal mem num print str to_x

init_SRC = ft_bzero.c ft_bnull.c
IS_X_SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
	ft_isprint.c ft_issep.c
LEN_SRC = ft_intlen.c ft_strlen.c ft_ptrlen.c ft_uintlen_base.c 
LST_SRC = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
	ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c \
	ft_lstmap.c
MAL_SRC = ft_calloc.c ft_acalloc.c
MEM_SRC = ft_memset.c ft_memcpy.c ft_memmove.c ft_memchr.c \
	ft_memcmp.c 
NUM_SRC = ft_atoi.c ft_itoa.c
PRINT_SRC = ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
	ft_putnbr_fd.c ft_putlchar_fd.c ft_putlstr_fd.c \
	ft_putptr_base_fd.c ft_putnbr_base_fd.c
STR_SRC = ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_strrchr.c \
	ft_strncmp.c ft_strnstr.c ft_strdup.c ft_substr.c \
	ft_strjoin.c ft_strtrim.c ft_split.c ft_strmapi.c \
	ft_striteri.c
TO_X_SRC = ft_tolower.c ft_toupper.c ft_toint.c

SRC = \
	$(addprefix init/, $(init_SRC)) \
	$(addprefix is_x/, $(IS_X_SRC)) \
	$(addprefix len/, $(LEN_SRC)) \
	$(addprefix lst/, $(LST_SRC)) \
	$(addprefix mal/, $(MAL_SRC)) \
	$(addprefix mem/, $(MEM_SRC)) \
	$(addprefix num/, $(NUM_SRC)) \
	$(addprefix print/, $(PRINT_SRC)) \
	$(addprefix str/, $(STR_SRC)) \
	$(addprefix to_x/, $(TO_X_SRC))

OBJ = $(SRC:%.c=%.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) -rcs $@ $^

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
