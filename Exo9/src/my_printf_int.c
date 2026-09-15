#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include "my.h"

int printf_int(va_list args)
{
    my_putnbr(va_arg(args, int));
    return 0;
}