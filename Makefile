##
## Makefile for ok in /home/alexandre/Documents/cpp/memo/
##
## Made by Alexandre Chamard-bois
## Login   <alexandre.chamard-bois@epitech.eu@epitech.eu>
##
## Started on  Sat Sep 30 11:16:52 2017 Alexandre Chamard-bois
## Last update Sun Oct  8 18:04:03 2017 Alexandre Chamard-bois
##

NAME		=	memo++

CC		=	g++

RM		=	rm -f

RELEASE		=	false

OPTI_FLAG	=	-O2

CXXFLAGS	=	-std=c++14 -W -Wall -Wextra
CXXFLAGS	+=	-I./src/sprite/
CXXFLAGS	+=	-I./src/objects/camera/
CXXFLAGS	+=	-I./src/window/

ifeq	($(RELEASE),true)
 CXXFLAGS	+=	$(OPTI_FLAG)
 CXXFLAGS	+=	-Werror -Wno-unused-result
else
 CXXFLAGS	+=	-O0 -g
 CXXFLAGS	+=	-Wuninitialized
endif

LDFLAGS		=	-lsfml-graphics -lsfml-window -lsfml-system

SRC		=	src/main.cpp				\
			src/objects/camera/camera.cpp		\
			src/window/window.cpp			\

OBJ			=	$(SRC:.cpp=.o)

all:		$(NAME)

$(NAME):	$(OBJ)
		$(CC) -o $(NAME) $(OBJ) $(LDFLAGS)

clean:
		$(RM) $(OBJ)

fclean:		clean
		$(RM) $(NAME)

re:		fclean all

.PHONY:		all clean fclean re
