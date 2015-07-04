# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bcrespin <bcrespin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/05/12 18:36:45 by bcrespin          #+#    #+#              #
#    Updated: 2015/05/12 18:36:46 by bcrespin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


ifeq ($(HOSTTYPE),)
		HOSTTYPE := $(shell uname -m)_$(shell uname -s)
endif

NAME	= libft_malloc_$(HOSTTYPE).so
LS		= libft_malloc.so
DIRSRC	= ./src/
DIROBJ	= ./objects/

SRC= add_block.c \
		creat_memory.c \
		find_block.c \
		free.c \
		malloc.c \
		get_type.c \
		init_memory.c \
		join_block.c \
		print.c \
		realloc.c \
		show_alloc_mem.c \
		split_block.c \

OBJ= $(SRC:.c=.o)

DIROBJS= $(addprefix $(DIROBJ), $(OBJ))

CC= gcc

CFLAGS	= -Wall -Werror -Wextra -fPIC

AR		= ar
ARFLAGS	= -rc
HEAD	= -I ./includes/

all: $(NAME)

$(NAME): $(DIROBJS)
		@printf 'Compiling %s binaries : [\033[32mDONE\033[0m]\n' '$(NAME)'
		@gcc -shared -o $(NAME) $^
		@printf 'Compiling %s : [\033[32mDONE\033[0m]\n' '$(NAME)'
		@ln -s $(NAME) $(LS)

$(DIROBJ)%.o: $(DIRSRC)%.c
		@mkdir -p $(DIROBJ)
		@$(CC) -c $(CFLAGS) $^ $(HEAD) -o $@

clean:
		@rm -rf $(DIROBJ)
		@printf 'Clean %s : [\033[32mDONE\033[0m]\n' '$(NAME)'

fclean: clean
		@rm -rf $(NAME) $(LS)
		@printf 'Fclean %s : [\033[32mDONE\033[0m]\n' '$(NAME)'

re: fclean all

.PHONY: all clean fclean re
