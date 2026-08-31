#include <stdio.h>
#include "my.h"

int main(void){
    while(1){
        char *reponse = ask();

        if(comparer(reponse, "display") == 0){

        }
        
        if(comparer(reponse, "new") == 0){

        }

        if(comparer(reponse, "exit") == 0)
            break;
    }
    return 0;
}