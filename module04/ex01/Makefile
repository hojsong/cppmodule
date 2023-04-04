# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hojsong <hojsong@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/28 13:08:09 by hojsong           #+#    #+#              #
#    Updated: 2023/04/04 11:58:09 by hojsong          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
CXXFLAG = -Wall -Wextra -Werror -std=c++98
NAME = Animal
HEAD = ./
SRCS = Cat.cpp main.cpp Dog.cpp Animal.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp
OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CXXFLAG) -I $(HEAD) -o $(NAME) $(OBJS)

.cpp.o :
	$(CC) $(CXXFLAG) -I $(HEAD) -c $< -o $@

clean :
	rm -rf *.o

fclean : clean
	rm -rf $(NAME)

re : fclean all
