# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gde-jesu <gde-jesu@student.42.rio>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/23 08:52:55 by gde-jesu          #+#    #+#              #
#    Updated: 2024/05/23 09:08:06 by gde-jesu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Name #
NAME		= harlFilter

# CPP Variables #
SRCS 		= *.cpp
HDRS		= *.hpp

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