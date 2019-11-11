# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sb <sb@student.42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/06 10:31:10 by ipepelia          #+#    #+#              #
#    Updated: 2019/11/11 13:30:03 by sb               ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit
SRCS = 	main.c \
		Validation.c \
		LinkedList.c \
		MakeSqrt.c \
		MakeArray.c \
		FindMinSqrt.c \
		Support.c

FLAGS = -Wall -Werror -Wextra -o
OBJECTS=$(SRCS:.c=.o)
HEADERS=includes/libft.h
LIBFT= -L libft -lft

all: $(NAME)

$(NAME): $(SRCS)
	make -C libft
	gcc  $(FLAGS) $(NAME) $(SRCS) $(LIBFT)
clean:
	make -C libft clean
	rm -f $(OBJECTS)
fclean: clean
	make -C libft fclean
	rm -f $(NAME) 
re:	fclean all