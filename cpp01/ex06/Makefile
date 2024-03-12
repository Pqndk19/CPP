# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmassa-r <mmassa-r@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/12 00:40:07 by mmassa-r          #+#    #+#              #
#    Updated: 2024/03/12 00:40:09 by mmassa-r         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = harlFilter
CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -I./Includes -fsanitize=address
SRC = main.cpp srcs/Harl.cpp

OBJ = $(SRC:.cpp=.o)

all:	$(NAME)

$(NAME) : $(OBJ)
		$(CPP) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
		rm -rf $(OBJ)

fclean:	clean
		rm -rf $(NAME)

re: fclean all