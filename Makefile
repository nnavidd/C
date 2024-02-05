# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: navid <navid@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/11 15:53:18 by nnabaeei          #+#    #+#              #
#    Updated: 2024/02/05 07:40:50 by navid            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

OBJDIR	=	./obj

CC		=	gcc
CFLAGS	=	-Wall -Werror -Wextra

AR		=	ar
ARFLAGS	=	rcs

RM		=	rm
RMFLAGS	=	-Rf

SRCS	=	$(wildcard */*.c) \
			$(wildcard */*/*.c) \
			$(wildcard */*/*/*.c)
OBJS	=	$(addprefix $(OBJDIR)/, $(SRCS:.c=.o))

$(NAME): $(OBJS)
	@$(AR) $(ARFLAGS) $@ $^
	@echo "\033[38;5;2m-----Libft including gnl and printf compiled-----\033[0m"

$(OBJDIR)/%.o: %.c
	@mkdir -p $(@D)
	@$(CC) $(CFLAGS) -c $< -o $@ 

all: $(NAME)

clean:
	@$(RM) $(RMFLAGS) $(OBJDIR)
	@echo "\033[38;5;214m-----Object files cleaned-----\033[0m"

fclean: clean
	@$(RM) $(RMFLAGS) $(NAME)
	@echo "\033[38;5;214m-----exe file cleaned-----\033[0m"

re: fclean all

.PHONY: all clean fclean re


# NAME = libft.a

# CC = cc

# CFLAGS = -Wall -Werror -Wextra  

# cfiles = 	ft_isalpha.c 	\
# 			ft_strlen.c 	\
# 			ft_isdigit.c 	\
# 			ft_memset.c 	\
# 			ft_isalnum.c 	\
# 			ft_bzero.c 		\
# 			ft_isascii.c 	\
# 			ft_memcpy.c 	\
# 			ft_isprint.c 	\
# 			ft_memmove.c 	\
# 			ft_strlcpy.c 	\
# 			ft_strlcat.c 	\
# 			ft_toupper.c 	\
# 			ft_tolower.c 	\
# 			ft_strchr.c 	\
# 			ft_strrchr.c 	\
# 			ft_strncmp.c 	\
# 			ft_memchr.c		\
# 			ft_memcmp.c 	\
# 			ft_strnstr.c 	\
# 			ft_atoi.c		\
# 			ft_calloc.c 	\
# 			ft_strdup.c		\
# 			ft_substr.c		\
# 			ft_split.c		\
# 			ft_strjoin.c 	\
# 			ft_strtrim.c	\
# 			ft_itoa.c		\
# 			ft_strmapi.c	\
# 			ft_striteri.c	\
# 			ft_putchar_fd.c	\
# 			ft_putstr_fd.c	\
# 			ft_putendl_fd.c	\
# 			ft_putnbr_fd.c	\

# BONUS	= 	ft_lstadd_back.c 	\
# 			ft_lstadd_front.c	\
# 			ft_lstdelone.c		\
# 			ft_lstnew.c			\
# 			ft_lstsize.c		\
# 			ft_lstlast.c		\
# 			ft_lstclear.c		\
# 			ft_lstiter.c		\
# 			ft_lstmap.c			\
			
# OBJ = $(cfiles:.c=.o)

# OBJ_B = $(BONUS:.c=.o)


# all: $(NAME) bonus

# %.o: cfiles BONUS
# 	$(CC) $(CFLAGS) -c $@ -o $<

# $(NAME) : $(OBJ)
# 	ar rcs $(NAME) $^

# bonus: $(OBJ_B)
# 	ar rcs $(NAME) $^

# #clean:
# #	rm *.o 

# clean:
# 	rm -rf $(OBJ) $(OBJ_B)

# fclean : clean
# 	rm -rf $(NAME)

# re: fclean all

# navid:
# 	@find . -not -name "*.c" -not -name "Makefile" -not -name "libft.h" -not -name "." -not -name ".."| xargs rm -rf
