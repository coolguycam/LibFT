# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cdimitro <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/11 12:14:12 by cdimitro          #+#    #+#              #
#    Updated: 2019/02/24 23:24:19 by cdimitro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

TOTO = libft.a

SRC = *.c

OFILES = *.o

all: $(TOTO)

$(TOTO):
	gcc -Wall -Wextra -Werror -c $(SRC) -I libft.h
	ar rc $(TOTO) $(OFILES)
	ranlib $(TOTO)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(TOTO)

re: fclean all
