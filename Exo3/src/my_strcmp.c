/// Ecrire la fonction strcmp()

#include <stdio.h>
#include "my_strlen.h"

int comparer(char str1[], char str2[]){
    int x;
    int i = 0;
    int infini = 1;
    while(infini == 1){
        x = str1[i] - str2[i];
        if(x > 0)
            return 1;
        if(x < 0)
            return -1;
        if((str1[i] == '\0') && (str2[i] == '\0'))
            return 0;
        i++;
    }
}
