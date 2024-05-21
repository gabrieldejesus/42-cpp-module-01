# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gde-jesu <gde-jesu@student.42.rio>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/13 09:18:47 by gde-jesu          #+#    #+#              #
#    Updated: 2024/05/21 20:12:43 by gde-jesu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Name #
NAME		= Brain

# CPP Variables #
SRCS 		= *.cpp

# Compiling Variables #
CPP 		= c++
CFLAGS		= -Wall -Wextra -Werror -std=c++98
RM 			= rm -f

# Colors #
GREEN		= \e[32m
YELLOW		= \e[33m
RESET		= \e[0m
_SUCCESS	= ✨ $(GREEN)Compiled successfully$(RESET)
_INFO		= 🚀 $(YELLOW)Info$(RESET)

# Functions #
all:		$(NAME)

$(NAME):	$(SRCS) $(HDRS)
			@$(CPP) $(CFLAGS) $(SRCS) -o $(NAME)
			@printf "$(_SUCCESS) is ready.\n"

clean::
			@$(RM) $(NAME)
			@printf "$(_INFO) cleaning done.\n"

fclean:		clean

re: 		fclean all

.PHONY:		all clean fclean re
