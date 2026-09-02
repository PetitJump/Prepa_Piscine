#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "my.h"

int main(void){
    info_t information = create();
    while(1){
        my_putstr("Please do a choice (display, new, exit): ");
        char *answer = askstr();    

        if(compare(answer, "display\n") == 0){
            display(information);
        }
        if(compare(answer, "new\n") == 0){
            information = create();
        }
        if(compare(answer, "exit\n") == 0){
            free(answer);
            break;
        }
        free(answer);
    }
    return 0;
}