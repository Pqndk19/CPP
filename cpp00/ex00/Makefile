# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmassa-r <mmassa-r@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/20 16:13:55 by mmassa-r          #+#    #+#              #
#    Updated: 2023/12/20 16:13:56 by mmassa-r         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = magaphone
CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = megaphone.cpp

OBJ = $(SRC:.cpp=.o)

all:	$(NAME)

$(NAME) : $(OBJ)
		$(CPP) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
		rm -rf $(OBJ)

fclean:	clean
		rm -rf $(NAME)

re: fclean all
