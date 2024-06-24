# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dhasan <dhasan@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/24 21:44:59 by dhasan            #+#    #+#              #
#    Updated: 2024/06/24 22:08:34 by dhasan           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone
CC = c++
CFLAGS = -std=c++98 -Wall -Wextra -Werror
SRC = megaphone.cpp
OBJS = $(SRC:.cpp=.o)

all: $(NAME)

.SILENT:

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)
	echo $(GREEN)"Building $(NAME)"$(DEFAULT);

clean:
	rm -f $(OBJS)
	echo $(RED)"Removing $(NAME) object files"$(DEFAULT);

fclean: clean
	rm -f $(NAME)
	echo $(RED)"Removing $(NAME)"$(DEFAULT);

re: fclean all
	echo $(GREEN)"Rebuilding everything"$(DEFAULT);

.PHONY: all clean fclean re

# Colours
DEFAULT = "\033[39m"
GREEN = "\033[32m"
RED = "\033[31m"