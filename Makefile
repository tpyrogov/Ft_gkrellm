# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lpohribn <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/26 12:55:59 by lpohribn          #+#    #+#              #
#    Updated: 2019/01/26 12:56:02 by lpohribn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_gkrellm

SRC = main.cpp \
	IMonitorModule.cpp \
	IMonitorDisplay.cpp \
	HostnameModule.cpp \
	OsInfoModule.cpp \
	TimeModule.cpp \
	CpuModule.cpp	\
	RamModule.cpp	\

OBJ = $(SRC:.cpp=.o)

FLAGS = -Wall -Werror -Wextra -lncurses

CC = clang++

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME) $(FLAGS)

%.o : %.cpp
	$(CC) -c $< -o $@ $(FLAGS)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm $(NAME)

re: fclean all
