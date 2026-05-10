# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lchehbi <lchehbi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/08 15:36:00 by lchehbi          #+#    #+#              #
#    Updated: 2026/05/08 15:36:00 by lchehbi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a
CC		= cc
CFLAGS	= -Wall -Wextra -Werror
AR		= ar rcs

SRCS	= ft_printf.c \
		  ft_fonctions_1.c \
		  ft_fonctions_2.c

OBJS	= $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Optional: build and run the test binary
test: $(NAME)
	$(CC) $(CFLAGS) print.c -L. -lftprintf -o test_printf
	./test_printf

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME) test_printf

re: fclean all

.PHONY: all clean fclean re test
