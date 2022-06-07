# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gmasid <gmasid@student.42.rio>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/07 16:42:45 by gmasid            #+#    #+#              #
#    Updated: 2022/06/07 16:55:50 by gmasid           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a

SRCS	= ft_printf.c	\
				ft_printf_utils.c	\
				# ft_printf_hexa.c	\
				# ft_printf_ptr.c

OBJS	= $(SRCS:.c=.o)

CFLAGS	= -Wall -Wextra -Werror -I

.c.o:
		cc $(CFLAGS) include -c $< -o $(<:.c=.o)

$(NAME):	$(OBJS)
			cd ./libft && make && cp -v libft.a ../${NAME}
			ar rcs $(NAME) $(OBJS)
			ranlib $(NAME)

all:	$(NAME)

clean:
		rm -f $(OBJS) $(BN_OBJS)
		cd ./libft && make clean

fclean:	clean
		rm -f $(NAME)
		cd ./libft && make fclean

re:	fclean all

.PHONY:	all clean fclean re