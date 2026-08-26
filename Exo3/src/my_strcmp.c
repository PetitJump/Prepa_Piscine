/// Ecrire une fonction qui compare 2 strings, -1 si str1 < str2, 1 si str1 > str2 sinon 0

#include <stdio.h>
#include "my_strlen.h"

int comparer(char str1[], char str2[]){
    int taille_str1 = my_strlen(str1);
    int taille_str2 = my_strlen(str2);
    if(taille_str1 < taille_str2)
        return -1;
    if(taille_str1 > taille_str2)
        return -1;  
    return 0;
}
