#ifndef PRINTF_H
#define PRINTF_H

#include <unistd.h>
#include <stdlib.h>

int _printf(const char *format, ...);
unsigned int validate(const char *, int);
int is_valid(char c);
char *convert_char(void *);
char (*get_conversion_function(void *))(char *);

#endif /* PRINTF_H */
