#include <stdio.h>
#include "../include/my.h"

int main(void)
{
    printf("%s \n", read_file("test.txt"));
    read_file_line("test.txt");
    return 0;
}
