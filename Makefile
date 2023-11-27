# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iouhssei <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/27 21:15:58 by iouhssei          #+#    #+#              #
#    Updated: 2023/11/27 21:16:01 by iouhssei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Werror -Wextra
AR = ar rc

SRC = ft_putchar.c ft_putnbr_base.c ft_putptr.c ft_putstr.c ft_strchr.c ft_printf.c
NAME = libftprintf.a
OBJ = $(SRC:.c=.o)
GREEN = \033[0;32m
RED = \033[0;31m
NC = \033[0m

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

$(OBJ): $(SRC)
	$(CC) $(CFLAGS) -c $(SRC)

clean:
	@echo "$(RED)********************************************************* *    * ** ****        *******$(NC)"
	@echo "$(RED)*************---CLEAN AS NEW---******** *    ***************** ******$(NC)"
	@echo "$(RED)*******************************************************$(NC)"
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

git :
	@echo "$(GREEN)********************************** **** *****  ************** * * ** ****$(NC)"
	@echo "$(GREEN)***************--PUUUSHIIII--***************************  ***** *** * ** * *****$(NC)"
	@echo "$(GREEN)********************************** ***** **** *** ** **** **$(NC)"

	git add .
	git commit -m "adding from the Makefile"
	git push
