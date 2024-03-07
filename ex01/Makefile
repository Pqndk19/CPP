# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmassa-r <mmassa-r@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/26 16:25:05 by mmassa-r          #+#    #+#              #
#    Updated: 2023/12/26 16:25:06 by mmassa-r         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phone_book
CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -I./Includes -fsanitize=address
SRC = main.cpp src/Contact.cpp src/PhoneBook.cpp

OBJ = $(SRC:.cpp=.o)

all:	$(NAME)

$(NAME) : $(OBJ)
		$(CPP) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
		rm -rf $(OBJ)

fclean:	clean
		rm -rf $(NAME)

re: fclean all
