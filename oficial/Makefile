# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pcristin <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/05 18:35:23 by pcristin          #+#    #+#              #
#    Updated: 2019/05/08 11:48:42 by pcristin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ./srcs

CF = $(SRC)/ft_memalloc.c $(SRC)/ft_memdel.c $(SRC)/ft_strnew.c $(SRC)/ft_strdel.c $(SRC)/ft_strclr.c $(SRC)/ft_striter.c $(SRC)/ft_striteri.c $(SRC)/ft_strmap.c $(SRC)/ft_strmapi.c $(SRC)/ft_strcmp.c $(SRC)/ft_strlen.c $(SRC)/ft_strequ.c $(SRC)/ft_strnequ.c $(SRC)/ft_strncmp.c

OF = ft_memalloc.o ft_memdel.o ft_strnew.o ft_strdel.o ft_strclr.o ft_striter.o ft_striteri.o ft_strmap.o ft_strmapi.o ft_strcmp.o ft_strlen.o ft_strequ.o ft_strnequ.o ft_strncmp.o

HDR = ./hdr/libft.h

NAME = libft.a

all: $(NAME)

$(NAME):
	gcc -c -Wall -Wextra -Werror $(CF) $(HDR)
	ar rc $(NAME) $(OF)
	ranlib $(NAME)

clean:
	/bin/rm -rf *.o

fclean:clean
	/bin/rm -rf $(NAME)

re: fclean all
