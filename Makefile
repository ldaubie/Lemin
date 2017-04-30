# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Louis <Louis@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/03/22 15:55:06 by ldaubie           #+#    #+#              #
#    Updated: 2017/04/28 14:31:41 by Louis            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
#

NAME = lem-in

SRC = 	src/main.c src/check.c src/ft_parsing.c src/ft_path.c src/doublon_del.c src/rev.c src/init.c\
		src/delete_maillon.c src/ft_coporigin.c src/ft_selection.c src/ft_algo.c src/ft_display.c\
		src/utils.c src/utils2.c src/utils3.c src/utils4.c src/link_next.c src/generation.c src/check_bis.c\

OBJ = $(SRC:%.c=%.o)

WFLAGS = -Wall -Werror -Wextra

CC = gcc

HEADERS = -I includes/

I_LIBFT = -I libft/includes

LIBFT = $(I_LIBFT) -Llibft -lft

all: $(NAME)

$(NAME): $(OBJ)
	@make -C libft
	$(CC) $(WFLAGS) $(HEADERS) $(OBJ) -o $(NAME) $(LIBFT)
	@echo created
	
%.o: %.c
	$(CC) $(WFLAGS) $(HEADERS) -c -o $@ $< $(I_LIBFT)

clean:
	@make clean -C libft
	rm -rf $(OBJ)
	
fclean: clean
	@make fclean -C libft
	rm -rf $(NAME)
	
re: fclean all

.PHONY: re fclean clean all
