# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/05 16:23:01 by anoukan           #+#    #+#              #
#    Updated: 2025/03/05 16:23:02 by anoukan          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	ex01
CXX			=	c++
CXXFLAGS	=	-Werror -Wall -Wextra -std=c++98

SRC			=	./src/Fixed.cpp \
				main.cpp

OBJ			=	$(SRC:.cpp=.o)

.phony:			all re clean fclean

all:			$(NAME)

$(NAME):		$(OBJ)
				$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
				rm -f $(OBJ)

fclean:			clean
				rm -f $(NAME)

re:				fclean all