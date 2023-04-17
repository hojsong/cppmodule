# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hojsong <hojsong@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/28 13:08:09 by hojsong           #+#    #+#              #
#    Updated: 2023/04/17 16:06:05 by hojsong          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
CXXFLAG = -Wall -Wextra -Werror -std=c++98
NAME = Account
HEAD = Account.hpp
SRCS = Account.cpp test.cpp
OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CXXFLAG) -I $(HEAD) -o $(NAME) $(OBJS)

.cpp.o :
	$(CC) $(CXXFLAG) -I $(HEAD) -c $< -o $@

clean :
	rm -rf *.o
	rm *_log.txt

fclean : clean
	rm -rf $(NAME)

re : fclean all
