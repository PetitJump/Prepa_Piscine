#include <stdio.h>
#include <unistd.h>

void putstr(char *chr){
    int i;
    for(i=0; chr[i] != '\0'; i++);
    write(1, chr, i);
}

void putnbr(int nbr){
    int nb_print;
    int i;
    write(1, &nb_print, 1);
}