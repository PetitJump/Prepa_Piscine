#include <stdio.h>
#include <unistd.h>
#include "my.h"

char* ask(void){
    char *buffer = malloc(15);
    int nb = read(0, buffer, 14);
    buffer[nb] = '\0';
    return buffer;
}