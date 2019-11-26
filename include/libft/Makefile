# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bebeck <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/19 12:45:48 by bebeck            #+#    #+#              #
#    Updated: 2019/11/18 14:45:10 by jonsandl         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = @gcc
CFLAGS = -Wall -Werror -Wextra -I. -c
SRCS =	mem/ft_memset.c\
		mem/ft_memcpy.c\
		mem/ft_memccpy.c\
		mem/ft_memmove.c\
		mem/ft_memchr.c\
		mem/ft_memcmp.c\
		mem/ft_memalloc.c\
		str/ft_bzero.c\
		str/ft_strlen.c\
		str/ft_strdup.c\
		str/ft_strcpy.c\
		str/ft_strncpy.c\
		str/ft_strcat.c\
		str/ft_strncat.c\
		str/ft_strlcat.c\
		str/ft_strchr.c\
		str/ft_strrchr.c\
		str/ft_strstr.c\
		str/ft_strnstr.c\
		str/ft_strclr.c\
		str/ft_strdel.c\
		str/ft_strcmp.c\
		str/ft_striter.c\
		str/ft_strmap.c\
		str/ft_strmapi.c\
		str/ft_striteri.c\
		str/ft_strnew.c\
		str/ft_strncmp.c\
		str/ft_strrev.c\
		str/ft_strequ.c\
		str/ft_strchr2.c\
		str/ft_strdtrim.c\
		str/counter.c\
		str/ft_strtrim.c\
		str/ft_strsplit.c\
		str/ft_strjoin.c\
		str/ft_strnequ.c\
		str/ft_strsub.c\
		str/ft_toupper.c\
		str/ft_tolower.c\
		str/get_next_line.c\
		math/ft_atoi.c\
		math/ft_isalpha.c\
		math/ft_isdigit.c\
		math/ft_isalnum.c\
		math/ft_isascii.c\
		math/ft_isprint.c\
		math/ft_div.c\
		math/ft_atol.c\
		math/ft_abs.c\
		math/ft_itoa.c\
		put/ft_putstr.c\
		put/ft_putchar.c\
		put/ft_putendl.c\
		put/ft_putnbr.c\
		put/ft_putchar_fd.c\
		put/ft_putstr_fd.c\
		put/ft_putendl_fd.c\
		put/ft_putnbr_fd.c\
		lst/ft_lstnew.c\
		lst/ft_lstadd.c\
		lst/ft_lstdel.c\
		lst/ft_lstdelone.c\
		lst/ft_lstcount.c\
		lst/ft_lstrev.c\
		lst/ft_lstiter.c\
		lst/ft_lstmap.c\
		
OBJ = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
		@echo "Compiling files.."
		@ar -rc $(NAME) $(OBJ)
		@ranlib $(NAME)
		@echo "Compilation Complete"

clean:
		@echo "Removing OBJ files.."
		@rm -f $(OBJ)

fclean: clean
		@echo "Removing libft.a files.."
		@rm -f $(NAME)
		@echo "Complete"

re:	fclean all
