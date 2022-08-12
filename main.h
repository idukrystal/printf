#ifndef MAIN_H
#define MAIN_H

/**
 * struct flags - represents all flags
 * @plus: '+' flag
 * @space: ' ' flag
 * @hash: '#' flag
 */
typedef struct flags
{
	int plus;
	int space;
	int hash;
	int l;
	int h;
} flags;

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

int _printf(const char *format, ...);

unsigned int _strlen(const char *);
int is_flag(char, flags *);
void set_width(char *, int, int, flags *);
int is_digit(char );
int to_int(char );
int is_valid(char c);
char *convert_char(void *);
int print_specifier(char c, va_list args, flags *);
unsigned int  print_number(int n, flags *);
unsigned int  print_u_number(unsigned int);
unsigned int print_lu_number(unsigned long  int);
unsigned int print_su_number(unsigned short  int);
unsigned int print_l_number(long int, flags *);
unsigned int print_s_number(short int, flags *);
int _putchar(int);
int to_base(unsigned int, char, flags *);
int base_n(unsigned int, char);
int to_l_base(unsigned long  int, char, flags *);
int base_l_n(unsigned long int, char);
int to_s_base(unsigned short int, char, flags *);
int base_s_n(unsigned short  int, char);
int to_address(unsigned long);
int to_long_hex(unsigned long ad);
int _puts(char *);
int print_ascii(char *);

int print_rev(char *);

int rot13(char *s);

char rot(char c);

int width(const char *format, int *i, va_list list);

#endif /* MAIN_H  */
