#include <stdio.h>
#include <stdlib.h>
#include "../include/my.h"

int main(void)
{
    char* buffer = read_file_char("test.txt");
    printf("%s \n", buffer);
    free(buffer);
    read_file_line("test.txt");
    return 0;
}
