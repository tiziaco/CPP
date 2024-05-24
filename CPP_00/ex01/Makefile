# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tiacovel <tiacovel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/08 11:38:10 by tiacovel          #+#    #+#              #
#    Updated: 2024/05/24 11:19:42 by tiacovel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

SRC =	$(wildcard src/*.cpp) $(wildcard *.cpp)

OBJ	= $(SRC:.cpp=.o)

RM		= rm -f
CC		= c++
CFLAGS	= -std=c++98 #-Wall -Wextra -Werror 

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -g -O0 $(OBJ) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -g -O0 -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re