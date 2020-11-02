# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/02 03:48:35 by bbellavi          #+#    #+#              #
#    Updated: 2020/11/02 03:52:19 by bbellavi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= g++

SRC_DIR	= srcs
INC_DIR = includes

SRCS	= main.c

NAME	= ChessGame

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) -o $(NAME) $(SRCS) -I $(INC_DIR)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all