#include <stdio.h>
#include <unistd.h>

void my_putstr(char *chr){
    int i;
    for(i=0; chr[i] != '\0'; i++);
    write(1, chr, i);
}


void my_putnbr(int nbr){
    if(nbr >= 10)
        my_putnbr(nbr / 10);
    
    int nb_print = (nbr % 10) + '0'; // '0' vaut 48 (on l'utilise pour trouver le code ASCII)
    write(1, &nb_print, 1);
}