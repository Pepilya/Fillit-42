# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ipepelia <ipepelia@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/06 10:31:10 by ipepelia          #+#    #+#              #
#    Updated: 2019/10/08 13:23:05 by ipepelia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS =	ft_bzero.c \
		ft_memccpy.c \
		ft_memchr.c \
		ft_strncat.c \
		ft_strcmp.c \
		ft_strncpy.c \
		ft_strstr.c \
		ft_strcat.c \
		ft_strcpy.c \
		ft_strlcat.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memset.c \
		ft_memmove.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strnstr.c \
		ft_strlen.c \
		ft_strdup.c \
		ft_strncmp.c \
		ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_atoi.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_memalloc.c \
		ft_strnew.c \
		ft_strclr.c \
		ft_striter.c \
		ft_striteri.c \
		ft_strmap.c \
		ft_strequ.c \
		ft_strnequ.c \
		ft_strsub.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_strsplit.c \
		ft_strdel.c \
		ft_memdel.c \
		ft_strmapi.c \
		ft_itoa.c \
		ft_putchar_fd.c \
		ft_putchar.c \
		ft_putnbr_fd.c \
		ft_putnbr.c \
		ft_putstr_fd.c \
		ft_putstr.c \
		ft_putendl_fd.c \
		ft_putendl.c \
		ft_sortnb.c \
		ft_range.c \
		get_next_line.c


FLAGS = -Wall -Werror -Wextra -Iincludes 
OBJECTS=$(SRCS:.c=.o)
HEADERS=includes/libft.h

all: $(NAME)

$(NAME): $(SRCS)
	gcc  $(FLAGS) -c $(SRCS) -I $(HEADERS)
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)
clean:
	rm -f $(OBJECTS)
fclean: clean
	rm -f $(NAME) 
re:	fclean all