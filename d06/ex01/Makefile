# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bcrespin <bcrespin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/01/05 13:31:29 by bcrespin          #+#    #+#              #
#    Updated: 2015/01/13 20:37:34 by bcrespin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = serial

SRC = main.cpp

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
