# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dhasan <dhasan@student.42heilbronn.de>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/18 11:52:45 by dhasan            #+#    #+#              #
#    Updated: 2024/09/03 17:47:50 by dhasan           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = materia
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror
INCLUDES = -I ./inc

SRCS = main.cpp AMateria.cpp Cure.cpp Ice.cpp Character.cpp MateriaSource.cpp

OBJDIR = objs
SRCDIR = src

SRC = $(addprefix $(SRCDIR)/, $(SRCS))
OBJS = $(SRC:$(SRCDIR)/%.cpp=$(OBJDIR)/%.o)

all: $(NAME)

.SILENT:

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)
	echo $(GREEN)"Building $(NAME)"$(DEFAULT);

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	@mkdir -p $(OBJDIR)
	$(CC) $(CXXFLAGS) $(INCLUDES) -c $< -o $@

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