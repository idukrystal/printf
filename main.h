#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

int _printf(const char *format, ...);
unsigned int _strlen(const char *);
int is_valid(char c);
char *convert_char(void *);
int print_specifier(char c, va_list args);
unsigned int  print_number(int n);
int _putchar(char);
int to_base(unsigned int, char);

#endif /* MAIN_H  */
