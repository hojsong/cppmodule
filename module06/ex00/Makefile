# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hojsong <hojsong@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/18 15:59:17 by hojsong           #+#    #+#              #
#    Updated: 2023/04/28 17:19:29 by hojsong          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXXFLAG = -Wall -Wextra -Werror -std=c++98
NAME = convert
SRCS = main.cpp ScalarConvert.cpp
OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	$(CXX) $(CXXFLAG) -o $(NAME) $(OBJS)

.cpp.o :
	$(CXX) $(CXXFLAG) -c $< -o $@

clean :
	rm -rf *.o

fclean : clean
	rm -rf $(NAME)

re : fclean all