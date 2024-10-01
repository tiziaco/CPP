# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tiacovel <tiacovel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/08 11:38:10 by tiacovel          #+#    #+#              #
#    Updated: 2024/10/01 16:11:05 by tiacovel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = scalar

SRC =	$(wildcard *.cpp)

OBJ	= $(SRC:.cpp=.o)

RM		= rm -f
CC		= c++
CFLAGS	= -Wall -Wextra -Werror -std=c++98 -pedantic

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -g -O0 $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -g -O0 -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re