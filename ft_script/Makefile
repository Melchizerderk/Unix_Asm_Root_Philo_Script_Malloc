# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bcrespin <bcrespin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/05/11 17:38:58 by bcrespin          #+#    #+#              #
#    Updated: 2015/05/11 17:39:00 by bcrespin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		ft_script

SRC =		srcs/

INCDIR =	includes/

SOURCE =	$(SRC)main.c $(SRC)display.c $(SRC)ptyinit.c

OBJ =		$(SOURCE:.c=.o)

LIBDIR =	libft/

LIB =		$(LIBDIR)libft.a

LIB_COMP =	-L ./$(LIBDIR) -lft

CC =		gcc

FLAG =		-I $(INCDIR) -Wall -Wextra -Werror -g

RED = \033[33;31m
BLUE = \033[33;34m
GREEN = \033[33;32m
RESET = \033[0m

.PHONY: all re fclean

all: $(NAME)

$(LIB):
		@$(MAKE) -C $(LIBDIR)

$(NAME): $(LIB) $(OBJ)
		@$(CC) -o $(NAME) $(FLAG) $^
		@rm -f $(DEP).gch
		@echo "[$(GREEN)Compilation $(BLUE)$(NAME) $(GREEN)ok$(RESET)]"

%.o: %.c
		@$(CC) -c -o $@ $(FLAG) $^

clean:
	@cd $(LIBDIR) && $(MAKE) $@
	@rm -f $(OBJ)
	@echo "[$(RED)Supression des .o de $(BLUE)$(NAME) $(GREEN)ok$(RESET)]"

fclean: clean
		@cd $(LIBDIR) && $(MAKE) $@
		@rm -f $(NAME)
		@echo "[$(RED)Supression de $(BLUE)$(NAME) $(GREEN)ok$(RESET)]"

re: fclean all
