# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: loosorio <loosorio@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/05 22:02:42 by loosorio          #+#    #+#              #
#    Updated: 2023/11/03 20:25:45 by loosorio         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
CFLAGS = -Werror -Wextra -Wall
SRC = ft_isalnum.c ft_isalpha.c ft_isdigit.c ft_isascii.c\
	ft_isprint.c ft_strlen.c ft_toupper.c ft_tolower.c\
	ft_strchr.c ft_strrchr.c ft_memset.c ft_bzero.c\
	ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c\
	ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c\
	ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c\
	ft_strjoin.c ft_strtrim.c ft_itoa.c ft_split.c\
	ft_strmapi.c ft_striteri.c ft_putchar_fd.c\
	ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c\
		ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c\
		ft_lstclear.c ft_lstiter.c ft_lstmap.c\

OBJ = $(SRC:.c=.o)
$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJ)
BONUS_OBJ = $(BONUS:.c=.o)
all: $(NAME)
bonus: $(BONUS_OBJ)
	ar -rcs $(NAME) $(BONUS_OBJ)
clean:
	@echo "\nRemoving objects:"
	rm -f $(OBJ) $(BONUS_OBJ)
fclean: clean
	@echo "\nRemoving libft.a:"
	rm -f $(NAME)
re: fclean all
.PHONY: all clean fclean re
