# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aperron <aperron@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/03 18:26:15 by aperron           #+#    #+#              #
#    Updated: 2024/02/10 22:43:07 by aperron          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

########################### VARIABLES ############################

NAME		= push_swap

SRC_FOLDER	= ./src/
LFT_FOLDER	= ./libft/

SRCS_BLANK	= main input utils actions init stacks actions2 actions3 logic \
			free logic2 logic3 logic4 logic5
		
SRCS		= $(addsuffix .c, $(addprefix $(SRC_FOLDER), $(SRCS_BLANK)))

FLAGS		= -g -Wall -Wextra -Werror

CC			= gcc

RM			= rm -f
RM_ALL		= rm -drf

TO_CLEAN	= *.dSYM *.o

########################## TARGETS ###############################

all: $(NAME) run

$(NAME): $(SRCS)
	$(CC) $(FLAGS) $(SRCS) -L$(LFT_FOLDER) -lft -o $(NAME)

run:
	@./$(NAME)

clean:
	@$(RM_ALL) $(TO_CLEAN)

fclean: clean
	@$(RM) $(NAME)
	
re: fclean all

.PHONY: all run clean fclean re

###################################################################