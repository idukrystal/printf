#include "../main.h"

int main()
{
/**	for (long i = 1000000; i < 1000100; i++)
	{
		_printf("%i   %p\n", i,i);
		}

	_printf("Address:[%p]\n", -10000000);
    printf("Address:[%p]\n", -10000000);*/

	int len = printf("%l#u\n", 200000000000000000);
      int len2 = _printf("%l#u\n", 200000000000000000);
      printf("%i %d\n" , len, len2);
     _printf("%i %d\n", len2, len);
}
