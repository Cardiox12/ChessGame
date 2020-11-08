# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/02 03:48:35 by bbellavi          #+#    #+#              #
#    Updated: 2020/11/08 08:05:15 by bbellavi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= g++ -std=c++11

SRC_DIR	= srcs
INC_DIR = includes

SRCS	= main.c
SRCS	+= $(SRC_DIR)/ChessBoard.cpp
SRCS	+= $(SRC_DIR)/ChessGame.cpp
SRCS	+= $(SRC_DIR)/ChessPiece.cpp
SRCS	+= $(SRC_DIR)/ChessPlayer.cpp


NAME	= ChessGame

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) -o $(NAME) $(SRCS) -I $(INC_DIR)

clean:
	@rm -f $(NAME)

fclean: clean

re: fclean all