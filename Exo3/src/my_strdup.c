/// Ecrire une fonction qui alloue puis copie str1 dans str2

#include <stdio.h>
#include "my_strlen.h"
#include <stdlib.h> // Pour malloc
#include "my_strcpy.h"

char* dupliquer(char str1[]){
    char* str2 = malloc((my_strlen(str1)+1) * sizeof(char)); // +1 car il y a '\0'
    copie(str1, str2);
    return str2;
}