#ifndef MY_H_
    #define MY_H_

int printf_pourcentage(va_list args);
int printf_str(va_list args);
int printf_int(va_list args);
void my_putstr(char *chr);
void my_putnbr(int nbr);
int my_printf(char* str, ...);

typedef int (*fonctions_t)(va_list args);

typedef struct {
    char type;
    fonctions_t fonction;
} fusion_t;

static const fusion_t tableau[] = {
    {'i', &printf_int},
    {'d', &printf_int},
    {'s', &printf_str},
    {'%', &printf_pourcentage},
    {'\0', NULL}
};


#endif