#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

int _printf(const char *format, ...);

unsigned int _strlen(const char *);
int is_flag(char );

int is_valid(char c);
char *convert_char(void *);
int print_specifier(char c, va_list args);
unsigned int  print_number(int n);
unsigned int  print_u_number(unsigned int);
int _putchar(int);
int to_base(unsigned int, char);
int to_address(unsigned long);
int to_long_hex(unsigned long ad);
int _puts(char *);
int print_ascii(char *);
#endif /* MAIN_H  */
