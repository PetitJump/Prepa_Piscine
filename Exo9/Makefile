
CC = gcc

CFLAGS = -Wall -Wextra

CPPFLAGS = -I ./include

SRC = src/main.c \
	src/my_printf.c \
	src/my_put.c \
	
NAME = main

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(OBJ) -o $(NAME) $(CPPFLAGS) $(CFLAGS)

clean : # Supprime les fichiers en .o
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME) 

re : fclean all

.PHONY : re fclean clean all