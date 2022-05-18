# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/18 07:56:26 by bguyot            #+#    #+#              #
#    Updated: 2022/05/18 07:59:30 by bguyot           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	ex01.exe

SRCS	=	main.cpp zombieHorde.cpp Zombie.cpp

OBJS	=	$(SRCS:.cpp=.o)

CCXX	=	@c++
CXXFLAGS=	-Wall -Wextra -Werror -std=c++98
RM		=	@rm -rf

.cpp.o:
	 $(CCXX) -c $(CXXFLAGS) -o $@ $<

all:	$(NAME)

$(NAME): $(OBJS)
	$(CCXX) $(CXXFLAGS) -o $(NAME) $(OBJS)
	@printf "\e[36m\tCompilation \t[ ✓ ]\n\e[39m"

clean:
	$(RM) $(OBJS)
	@printf "\e[31m\tClean \t\t[ ✓ ]\n\e[39m"

fclean: clean
	$(RM) $(NAME)
	@printf "\e[35;5;161m\tBinary Clean \t[ ✓ ]\n\e[39m"

re: fclean all

.PHONY: all clean fclean re
