#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include "my.h"

int printf_pourcentage(va_list args)
{
    my_putstr("% ");
    return 0;
}