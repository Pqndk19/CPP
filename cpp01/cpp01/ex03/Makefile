# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmassa-r <mmassa-r@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/29 00:30:26 by mmassa-r          #+#    #+#              #
#    Updated: 2024/02/29 00:30:28 by mmassa-r         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = no_violence
CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -I./Includes -fsanitize=address
SRC = main.cpp src/HumanA.cpp src/HumanB.cpp src/Weapon.cpp

OBJ = $(SRC:.cpp=.o)

all:	$(NAME)

$(NAME) : $(OBJ)
		$(CPP) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
		rm -rf $(OBJ)

fclean:	clean
		rm -rf $(NAME)

re: fclean all