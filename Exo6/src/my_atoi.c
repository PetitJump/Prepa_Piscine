/// Ecrire une fonction qui prend une string en entrée et qui te renvoie un entier : "123" -> 123
#include <stdio.h>

int my_atoi(char str[]){
    int rendu = 0;
    for(int i=0; str[i] != '\0'; i++){
        rendu = rendu * 10 + (str[i] - '0'); // '0' vaut 48 
    }
    return rendu;
}