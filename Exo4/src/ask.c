#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "my.h"

int ifchar(char *buffer){
    for(int i=0; buffer[i]!='\n'; i++){
        if(buffer[i] >= 48 && buffer[i] <= 57){
            return 1;
        }
    }
    return 0;
}

int ifint(char *buffer){
    for(int i=0; buffer[i]!='\n'; i++){
        if(buffer[i] < 48 || buffer[i] > 57){
            return 0;
        }
    }
    return 1;
}

char* askstr(void){
    char *buffer = malloc(BUFSIZ * sizeof(char));
    int continuer = 1;
    while(continuer == 1){
        int nb = read(0, buffer, BUFSIZ -1); // -1 car on laisse la place au '\0'
        if(nb == -1){
            my_putstr("Error read : -1 was return");
            return NULL;
        }
        buffer[nb] = '\0';
        continuer = ifchar(buffer);
    }
    
    return buffer;
}

int askint(void){
    char *buffer = malloc(BUFSIZ * sizeof(char));
    while(1){
        int nb = read(0, buffer, BUFSIZ -1); // -1 car on laisse la place au '\0'
        buffer[nb] = '\0';
        if(ifint(buffer) == 1)
            break;
    }

    int total = 0;
    for(int i = 0; buffer[i] != '\n'; i++){
        total = total * 10 + (buffer[i] - '0');}
        
    free(buffer);
    return total;
}