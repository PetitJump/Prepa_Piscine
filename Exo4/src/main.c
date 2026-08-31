#include <stdio.h>
#include "my.h"

int main(void){
    while(1){
        char *answer = ask();

        if(compare(answer, "display") == 0){

        }

        if(compare(answer, "new") == 0){

        }

        if(compare(answer, "exit") == 0)
            break;
    }
    return 0;
}