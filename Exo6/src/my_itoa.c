/// Ecrire une fonction qui prend un entier et qui la return une string : 123 -> "123"
#include <stdio.h>
#include <stdlib.h>

int how_many_int(int nb){
    int rendu = 0;
    while(1){
        rendu += 1;
        if(nb / 10 == 0)
            break;
        nb = nb / 10;
    }
    return rendu;
}

char* my_itoa(int nb){
    char *rendu = malloc(BUFSIZ * sizeof(char));
    int nb_chiffres = how_many_int(nb);
    for(int i=(nb_chiffres-1); i>=0; i--){
        rendu[i] = nb % 10 + '0';
        nb = nb / 10;
    }
    rendu[nb_chiffres] = '\0';
    return rendu;
}