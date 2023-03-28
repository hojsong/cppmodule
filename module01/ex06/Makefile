# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hojsong <hojsong@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/28 13:08:09 by hojsong           #+#    #+#              #
#    Updated: 2023/03/17 16:15:23 by hojsong          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
CXXFLAG = -Wall -Wextra -Werror -std=c++98
NAME = HARL
HEAD = Harl.hpp
SRCS = main.cpp Harl.cpp
OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CXXFLAG) -o $(NAME) $(OBJS)

.cpp.o :
	$(CC) $(CXXFLAG) -c $< -o $@

clean :
	rm -rf *.o

fclean : clean
	rm -rf $(NAME)

re : fclean all
