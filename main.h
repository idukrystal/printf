#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>


int _printf(const char *format, ...);
unsigned int _strlen(const char *);
int is_valid(char c);
char *convert_char(void *);
int print_specifier(char c, va_list args);

#endif /* MAIN_H  */
