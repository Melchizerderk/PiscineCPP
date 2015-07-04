# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bcrespin <bcrespin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/01/05 13:31:39 by bcrespin          #+#    #+#              #
#    Updated: 2015/01/06 21:57:20 by bcrespin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = replace

SRC = replace.cpp

OBJ = $(SRC:%.cpp=%.o)

CC = g++

FLAGS = -Werror -Wextra -Wall

.PHONY: all clean fclean re

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) -c $(SRC)
	$(CC) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
