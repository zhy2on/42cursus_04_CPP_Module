# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoh <jihoh@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/30 19:43:32 by jihoh             #+#    #+#              #
#    Updated: 2022/06/21 15:26:27 by jihoh            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = main.cpp Zombie.cpp zombieHorde.cpp
SRCS := $(addprefix $(SRC_DIR), $(SRCS))
OBJS =  $(addprefix $(OBJ_DIR), $(SRCS:.cpp=.o))

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
INCFLAGS = -I$(INC_DIR)

NAME = zombieHorde

SRC_DIR = srcs/
OBJ_DIR = objs/
INC_DIR = incs/

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $@ $(INCFLAGS)

$(OBJ_DIR)%.o : $(SRC_DIR)%.cpp $(INC_DIR)*.hpp
	@mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) -c $< -o $@ $(INCFLAGS)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re