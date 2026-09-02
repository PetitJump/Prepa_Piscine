#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "my.h"

char* askstr(void){
    char *buffer = malloc(15);
    int nb = read(0, buffer, 14);
    buffer[nb] = '\0';
    return buffer;
}

int askint(void){
    char *str = askstr();
    int total = 0;
    for(int i = 0; str[i] != '\0'; i++)
        total = total * 10 + (str[i] - '0');
        
    free(str);
    return total;
}