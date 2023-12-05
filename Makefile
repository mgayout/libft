# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mgayout <mgayout@student.42nice.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/09 14:27:16 by mgayout           #+#    #+#              #
#    Updated: 2023/11/09 14:27:16 by mgayout          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	libft.a
CC				=	gcc
CFLAGS			=	-Wall -Wextra -Werror
RM				=	rm -rf
SRC 			=	ft_atoi ft_bzero ft_calloc ft_isalnum ft_isalpha ft_isascii \
					ft_isdigit ft_isprint ft_memchr ft_memcmp ft_memcpy ft_memmove \
					ft_memset ft_strchr ft_strdup ft_strlcat ft_strlcpy ft_strlen \
					ft_strncmp ft_strnstr ft_strrchr ft_tolower ft_toupper ft_substr \
					ft_strjoin ft_strtrim ft_split ft_itoa ft_strmapi ft_striteri \
					ft_putchar_fd ft_putstr_fd ft_putendl_fd ft_putnbr_fd

SRC_BONUS 		=	ft_lstnew ft_lstadd_front ft_lstsize ft_lstlast ft_lstadd_back \
					ft_lstdelone ft_lstclear ft_lstiter ft_lstmap

SRC_A			=	$(addsuffix .c, ${SRC})

SRC_B			=	$(addsuffix _bonus.c, ${SRC_BONUS})

OBJ				=	$(SRC_A:.c=.o)

OBJ_BONUS		=	$(SRC_B:.c=.o)

ifndef WITH_BONUS
OBJS			=	$(OBJ)
else
OBJS			=	$(OBJ) $(OBJ_BONUS)
endif

all:			$(NAME)

$(NAME):		$(OBJS) 
					ar -rc $(NAME) $(OBJS)

bonus:
					@make WITH_BONUS=1 all

clean:
					$(RM) $(OBJS) $(OBJ_BONUS)

fclean: 		clean
					$(RM) $(NAME)

re:				fclean all

.PHONY: 		all clean fclean re bonus