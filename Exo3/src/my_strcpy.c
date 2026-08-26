/// Ecrire une fonction qui copie str1 dans str2

#include <stdio.h>
#include "my_strlen.h"

void copie(char str1[], char str2[]){ // On part tu principe que str1 va rentré dans str2
    for(int i=0; i<my_strlen(str1); i++){
        str2[i] = str1[i];
    }
    str2[my_strlen(str1)] = '\0';
}