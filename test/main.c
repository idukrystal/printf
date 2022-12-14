#include <limits.h>
#include <stdio.h>
#include "../main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    len = _printf("Unsigned:[%u]\n", ui);
    len2 = printf("Unsigned:[%u]\n", ui);
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    len = _printf("Unsigned octal:[%o]\n", ui);
    len2 = printf("Unsigned octal:[%o]\n", ui);
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    len = _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    len2 = printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Character:[%c %c]\n", 'H', 'B');
    printf("Character:[%c %c]\n", 'H', 'B');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    len = _printf("Unknown:[%r]\n", "man of war");
    printf("Unknown:[%i]\n", len);
    _printf("binary %b %b %b\n", 5 , 3, 0);


    _printf("%S\n", "Best\vSchool");
    return (0);
}
