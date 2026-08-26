/// Ecrire une fonction qui renvoie la taille de la string entrée

#include <stdio.h>

int my_strlen(char str[]){
    char fin = ' ';
    int i = 0;
    while(fin != '\0'){
        fin = str[i];
        i += 1;
    }
    return i-1; // -1 car i compte aussi '\0'
}