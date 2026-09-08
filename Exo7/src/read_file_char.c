/// Ecrit une fonction qui lit un fichier qui lit un fichier caractere par caractere et les stock dans un buffer
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


char* read_file_char(char* fichier)
{
    int fd = open(fichier, O_RDONLY); // On ouvre le fichier en mode lecture seul
    if(fd == -1)
        return NULL;

    char* buffer = malloc(BUFSIZ * sizeof(char));
    int nb = 1;
    int i = 0;
    for(i=0; nb!=0; i++)
        nb = read(fd, &buffer[i], 1);

    buffer[i] = '\0';
    close(fd);
    return buffer;
}

