
CC = gcc

CFLAG = -Wall -Wextra

CPPFLAGS = -I ./include

SRC = src/main.c \
src/my_strcmp.c \
src/my_strcpy.c \
src/my_strdup.c \
src/my_strlen.c \

NAME = fonctions

OBJ = $(SRC:.c=.o) # 

all: $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(OBJ) -o $(NAME) $(CPPFLAGS) $(CFLAG)

clean : # Supprime les fichiers en .o
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME) 

re : fclean all

.PHONY : re fclean clean all