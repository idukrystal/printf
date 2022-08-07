#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>


int _printf(const char *format, ...);
unsigned int validate(const char *, int);
int is_valid(char c);
char *convert_char(void *);
int _putchar(char c);

#endif /* MAIN_H  */
