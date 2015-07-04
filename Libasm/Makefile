# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkone <mkone@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/03/11 19:05:02 by mkone             #+#    #+#              #
#    Updated: 2015/03/26 14:53:43 by bcrespin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libfts.a

SRC = ft_bzero.s	\
      ft_strcat.s	\
      ft_isalpha.s	\
      ft_isdigit.s	\
      ft_isalnum.s	\
      ft_isascii.s	\
      ft_isprint.s	\
      ft_toupper.s	\
      ft_tolower.s	\
      ft_puts.s		\
      ft_strlen.s	\
      ft_memset.s	\
      ft_memcpy.s	\
      ft_strdup.s	\
      ft_cat.s		\
	  ft_strchr.s	\
	  ft_memcmp.s	\

OBJ = $(SRC:.s=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
	@echo ">> Lib creee."

%.o: %.s
	@~/.brew/Cellar/nasm/2.11.08/bin/nasm -f macho64 $< -o $@
	@echo "$@"

main:
	@gcc -c main.c
	@ld main.o $(NAME) -macosx_version_min 10.10 -lSystem -o libasm
	@echo ">> Execution du main."

clean:
	@/bin/rm -f $(OBJ)
	@/bin/rm -f main.o
	@/bin/rm -f libasm
	@echo "> .o et programme effaces."

fclean: clean
	@/bin/rm -f $(NAME)
	@echo "> La lib aussi du coup."

re: fclean all
