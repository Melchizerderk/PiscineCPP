# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bcrespin <bcrespin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/01/05 13:31:29 by bcrespin          #+#    #+#              #
#    Updated: 2015/01/14 15:10:34 by bcrespin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = iter

SRC = iter.cpp

OBJ = $(SRC:%.cpp=%.o)

CC = g++

FLAGS = -Werror -Wextra -Wall

.PHONY: all clean fclean re

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) -I includes -c $(SRC)
	$(CC) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
