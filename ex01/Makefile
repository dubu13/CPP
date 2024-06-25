# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dhasan <dhasan@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/25 16:22:01 by dhasan            #+#    #+#              #
#    Updated: 2024/06/25 16:23:10 by dhasan           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = MyAwesomePhoneBook
CC = c++
CFLAGS = -std=c++98 -Wall -Wextra -Werror
SRC = PhoneBook.cpp Contact.cpp main.cpp
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