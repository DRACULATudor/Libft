# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tlupu <tlupu@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/14 18:14:06 by tlupu             #+#    #+#              #
#    Updated: 2023/12/08 20:20:50 by tlupu            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC =   ft_isalnum.c ft_isalpha.c ft_tolower.c\
		ft_isdigit.c ft_isprint.c ft_strrchr.c\
		ft_strlcat.c ft_strlcpy.c ft_strlen.c \
		ft_toupper.c ft_isascii.c ft_strchr.c\
		ft_toupper.c ft_strncmp.c ft_strnstr.c\
		ft_memset.c  ft_bzero.c   ft_memmove.c\
		ft_memcpy.c  ft_memchr.c  ft_memcmp.c\
		ft_atoi.c	 ft_strdup.c  ft_calloc.c\
		ft_substr.c	 ft_strjoin.c ft_strtrim.c\
		ft_split.c	 ft_itoa.c	  ft_strmapi.c\
		ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c\
		ft_putendl_fd.c ft_putnbr_fd.c \

BONU = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c\
	   ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c\
	   ft_lstclear_bonus.c ft_lstiter_bonus.c  ft_lstmap_bonus.c\

all: $(NAME) 

$(NAME): 
	$(CC) -c -Wall -Wextra -Werror $(SRC)
	ar rc $(NAME) *.o
	rm -f *.o


# test: $(NAME) bonus
# 	$(CC) $(CFLAGS) $(NAME) main.c libft.a
# 	make clean
# 	./a.out

bonus: 
	$(CC) -c -Wall -Wextra -Werror $(BONU)
	ar rc $(NAME) *.o
	rm -f *.o

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re:	fclean all
