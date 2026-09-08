/// Ecrit une fonction qui permet de lire un fichier ligne par ligne et les affiche
#include <stdio.h>

void read_file_line(char* fichier){
    FILE *f = fopen(fichier, "r");
    char ligne[BUFSIZ];
    while(fgets(ligne, BUFSIZ, f) != NULL){
        printf("%s", ligne);
    }
}
