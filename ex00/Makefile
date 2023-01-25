# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mouarsas <mouarsas@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/25 16:18:10 by mouarsas          #+#    #+#              #
#    Updated: 2023/01/25 16:21:47 by mouarsas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Fixed
FLAGS = -Wall -Wextra -Werror -std=c++98
SRCS =  Fixed.cpp \
		main.cpp
OBJS = $(SRCS:.cpp=.o)
all:$(NAME)
$(NAME) : $(OBJS)
	c++ $(CXXFLAGS) $(OBJS) -o $(NAME)
%.o : %.cpp Fixed.hpp
	c++ $(FLAGS) -c $< -o $@
clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)
re : fclean all
