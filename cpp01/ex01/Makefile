# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmassa-r <mmassa-r@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/23 00:25:26 by mmassa-r          #+#    #+#              #
#    Updated: 2024/02/23 00:25:27 by mmassa-r         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = MoreeBrainzzz
CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -I./Includes -fsanitize=address
SRC = main.cpp src/Zombie.cpp src/zombieHorde.cpp 

OBJ = $(SRC:.cpp=.o)

all:	$(NAME)

$(NAME) : $(OBJ)
		$(CPP) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
		rm -rf $(OBJ)

fclean:	clean
		rm -rf $(NAME)

re: fclean all
