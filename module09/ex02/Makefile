# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hojsong <hojsong@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/18 15:59:17 by hojsong           #+#    #+#              #
#    Updated: 2023/05/10 20:52:57 by hojsong          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# vector 은 구현됬으니 deque 로 구현할게 남아있다.
# 또한 그두개의 시간이 차이가 나는이유를 설명할수있게 공부해둬야한다.
CXXFLAG = -Wall -Wextra -Werror -std=c++98
NAME = PmergeMe
SRCS = main.cpp PmergeMe.cpp
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