##
## Makefile for  in /home/AmOrAA/Delivery/LS/PSU_2016_my_ls
## 
## Made by Florian Testu
## Login   <AmOrAA@epitech.net>
## 
## Started on  Thu Dec  1 20:53:38 2016 Florian Testu
## Last update Sat Dec  3 12:40:54 2016 Florian Testu
##

CC      =       gcc

NAME    =       my_ls

SRCS    =       Fonc.c                  \
                my_ls.c	                \
                stat.c 	                \
		stat2.c			\
		main.c			\
		my_ls2.c

LIB	=	libmy.a

OBJS    =       $(SRCS:.c=.o)

all:    $(NAME)

$(NAME):         $(OBJS)
	$(CC) -o $(NAME)  $(OBJS)  $(LIB)

clean:
	rm -f $(NAME) $(OBJS)

fclean: clean
	rm -f $(NAME)

re:     fclean all
