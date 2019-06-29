# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pcristin <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/05 18:35:23 by pcristin          #+#    #+#              #
#    Updated: 2019/06/29 04:29:57 by pcristin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ./srcs

CF = $(SRC)/ft_memalloc.c $(SRC)/ft_memdel.c $(SRC)/ft_strnew.c $(SRC)/ft_strdel.c $(SRC)/ft_strclr.c $(SRC)/ft_striter.c $(SRC)/ft_striteri.c $(SRC)/ft_strmap.c $(SRC)/ft_strmapi.c $(SRC)/ft_strcmp.c $(SRC)/ft_strlen.c $(SRC)/ft_strequ.c $(SRC)/ft_strnequ.c $(SRC)/ft_strncmp.c $(SRC)/ft_strjoin.c $(SRC)/ft_strsub.c $(SRC)/ft_strtrim.c $(SRC)/ft_whcount.c $(SRC)/ft_strsplit.c $(SRC)/ft_putchar.c $(SRC)/ft_putstr.c $(SRC)/ft_putendl.c $(SRC)/ft_putnbr.c $(SRC)/ft_putchar_fd.c $(SRC)/ft_putstr_fd.c $(SRC)/ft_putendl_fd.c $(SRC)/ft_putnbr_fd.c $(SRC)/ft_strcpy.c $(SRC)/ft_itoa.c $(SRC)/ft_memset.c $(SRC)/ft_bzero.c $(SRC)/ft_memcpy.c $(SRC)/ft_memccpy.c $(SRC)/ft_memmove.c $(SRC)/ft_memchr.c $(SRC)/ft_memcmp.c $(SRC)/ft_strdup.c $(SRC)/ft_strncpy.c $(SRC)/ft_strcat.c $(SRC)/ft_strncat.c $(SRC)/ft_strlcat.c $(SRC)/ft_strchr.c $(SRC)/ft_strrchr.c $(SRC)/ft_strstr.c $(SRC)/ft_strnstr.c $(SRC)/ft_isalpha.c $(SRC)/ft_islower.c $(SRC)/ft_isupper.c $(SRC)/ft_isascii.c $(SRC)/ft_isdigit.c $(SRC)/ft_isalnum.c $(SRC)/ft_toupper.c $(SRC)/ft_tolower.c $(SRC)/ft_isprint.c

OF = ft_memalloc.o ft_memdel.o ft_strnew.o ft_strdel.o ft_strclr.o ft_striter.o ft_striteri.o ft_strmap.o ft_strmapi.o ft_strcmp.o ft_strlen.o ft_strequ.o ft_strnequ.o ft_strncmp.o ft_strjoin.o ft_strsub.o ft_strtrim.o ft_whcount.o ft_strsplit.o ft_putchar.o ft_putstr.o ft_putendl.o ft_putnbr.o ft_putchar_fd.o ft_putstr_fd.o ft_putendl_fd.o ft_putnbr_fd.o ft_strcpy.o ft_itoa.o ft_memset.o ft_bzero.o ft_memcpy.o ft_memccpy.o ft_memmove.o ft_memchr.o ft_memcmp.o ft_strdup.o ft_strncpy.o ft_strcat.o ft_strncat.o ft_strlcat.o ft_strchr.o ft_strrchr.o ft_strstr.o ft_strnstr.o ft_isalpha.o ft_islower.o ft_isupper.o ft_isascii.o ft_isdigit.o ft_isalnum.o ft_toupper.o ft_tolower.o ft_isprint.o

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
