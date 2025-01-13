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
FLAG			=	-Wall -Wextra -Werror

SRCDIR	= src
OBJDIR	= obj
HEADIR	= include

SRC		= $(shell find $(SRCDIR) -name '*.c')
OBJ		= $(patsubst $(SRCDIR)/%.c, $(OBJDIR)/%.o, $(SRC))
HEADER	= $(shell find $(HEADIR) -name '*.h')

all:			$(NAME)

$(NAME):		$(OBJ) $(HEADER) 
					@ar -rc $(NAME) $(OBJ)

$(OBJDIR)/%.o : $(SRCDIR)/%.c $(HEADER)
					@mkdir -p $(dir $@)
					@gcc $(FLAG) -c $< -o $@

clean:
					@rm -rf $(OBJDIR)

fclean: 		clean
					@rm -rf $(NAME)

re:				fclean all

.PHONY: 		all clean fclean re