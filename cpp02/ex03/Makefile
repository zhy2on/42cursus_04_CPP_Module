# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoh <jihoh@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/30 21:21:31 by jihoh             #+#    #+#              #
#    Updated: 2022/06/03 17:05:41 by jihoh            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = main.cpp Fixed.cpp Point.cpp bsp.cpp
OBJS = $(SRCS:.cpp=.o)

CXX = c++ -std=c++98
CXXFLAGS = -Wall -Wextra -Werror

NAME = is_inside_of_a_triangle

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re