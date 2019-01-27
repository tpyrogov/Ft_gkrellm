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
	Window.cpp	\
	DataModule.cpp\
	NetworkModule.cpp \
	winSDL.cpp

OBJ = $(SRC:.cpp=.o)

FLAGS = -Wall -Werror -Wextra  -std=c++98

VIZFLAG_LIB = -L ~/.brew/lib/ -lSDL2 -lSDL2_TTF

VIZFLAG_INC = -I ~/.brew/include/

CC = clang++

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME) $(FLAGS) -lncurses -lm $(VIZFLAG_LIB)

%.o : %.cpp
	$(CC) -c $< -o $@ $(FLAGS) $(VIZFLAG_INC)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm $(NAME)

re: fclean all
