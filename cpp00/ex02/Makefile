# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmassa-r <mmassa-r@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/12 18:38:22 by mmassa-r          #+#    #+#              #
#    Updated: 2024/01/12 18:38:22 by mmassa-r         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = first_job
CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address
SRC = tests.cpp Account.cpp

OBJ = $(SRC:.cpp=.o)

all:	$(NAME)

$(NAME) : $(OBJ)
		$(CPP) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
		rm -rf $(OBJ)

fclean:	clean
		rm -rf $(NAME)

re: fclean all