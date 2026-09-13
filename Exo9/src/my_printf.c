#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include "../include/my.h"

int my_printf(char* str, ...)
{
    va_list args; // Pour naviguer dans les arguments
    va_start(args, str);
    for(int i=0; str[i]!='\0'; i++){
        if(str[i] == '%'){

            if(str[i+1] == 'i')
                my_putnbr(va_arg(args, int));
            else if(str[i+1] == 's')
                my_putstr(va_arg(args, char*));
            else if(str[i+1] == '%')
                my_putstr("%");

        }
        else if(i!=0){ // Pour eviter de regarder en arrière a l'index 0
            if(str[i-1] != '%')
                write(1, &str[i], 1);
        }
        else
            write(1, &str[0], 1);
    }

    va_end(args);
    return 0;
}