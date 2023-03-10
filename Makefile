# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: isrodrig <isrodrig@student.42barcelona.co  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/22 12:05:52 by isrodrig          #+#    #+#              #
#    Updated: 2023/03/09 16:34:50 by isrodrig         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = ft_tools.c  ft_printf.c ft_hexa.c ft_point.c \
 
INCLUDE = ft_printf.h

CC = gcc
CFLAGS = -Wall -Werror -Wextra
AR = ar rcs
RM = rm -f

%.o:%.c $(INCLUDE)
	@echo compiling...
	@$(CC) $(CFLAGS) -c $< -o $@

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME) : $(OBJS)
	@$(AR) $(NAME) $(OBJS)
	@echo $(NAME) created

clean:
	@$(RM) $(OBJS)
	@echo all objects cleand successfully

fclean:
	@$(RM) $(OBJS)
	@$(RM) $(NAME)
	@echo objects and executable has been removed

re: fclean all

.PHONY = all clean re fclean
