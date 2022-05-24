# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoh <jihoh@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/21 21:44:50 by jihoh             #+#    #+#              #
#    Updated: 2022/05/24 20:09:15 by jihoh            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = megaphone.cpp
OBJS = $(SRCS:.cpp=.o)

CXX = g++
CXXFLAGS = -Wall -Wextra -Werror

NAME = megaphone

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
