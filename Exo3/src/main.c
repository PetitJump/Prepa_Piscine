#include "my.h"
#include <stdio.h>

int main(void)
{
    char test[] = "abcd";
    int x = my_strlen(test);   
    printf("%i \n", x);
    return 0;
}
