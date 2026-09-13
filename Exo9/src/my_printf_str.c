#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include "my.h"

int printf_str(va_list args)
{
    my_putstr(va_arg(args, char*));
    return 0;
}