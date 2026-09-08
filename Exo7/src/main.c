#include <stdio.h>
#include "../include/my.h"

int main(void)
{
    printf("%s", read_file("test.txt"));
    return 0;
}
