# **************************************************************************** #
#																			  #
#														 :::	  ::::::::	#
#	Makefile										   :+:	  :+:	:+:	#
#													 +:+ +:+		 +:+	  #
#	By: ressalhi <ressalhi@student.42.fr>		  +#+  +:+	   +#+		 #
#												 +#+#+#+#+#+   +#+			#
#	Created: 2021/11/08 17:36:30 by ressalhi		  #+#	#+#			  #
#	Updated: 2021/11/09 11:59:56 by ressalhi		 ###   ########.fr		#
#																			  #
# **************************************************************************** #

NAME = libft.a
CC = gcc
AR = ar
CFLAGS = -Wall -Wextra -Werror
ARFLAGS = rc
SRCS =	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isprint.c \
		ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
		ft_toupper.c ft_tolower.c ft_strchr.c ft_putchar_fd.c \
		ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c \
		ft_atoi.c ft_strdup.c ft_substr.c ft_putstr_fd.c ft_strtrim.c \
		ft_strlcpy.c ft_isascii.c ft_strjoin.c ft_putnbr_fd.c \
		ft_strlcat.c ft_strnstr.c ft_calloc.c ft_putendl_fd.c \
		ft_itoa.c ft_split.c  ft_strmapi.c ft_strtrim.c ft_striteri.c \

OBJS = $(SRCS:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS)
		$(AR) $(ARFLAGS) $(NAME) $(OBJS)
$(OBJS) :
		$(CC) $(CFLAGS) -c $(SRCS)
clean :
		rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all