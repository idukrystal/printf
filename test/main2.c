#include "../main.h"

int main()
{
/**	for (long i = 1000000; i < 1000100; i++)
	{
		_printf("%i   %p\n", i,i);
		}

	_printf("Address:[%p]\n", -10000000);
    printf("Address:[%p]\n", -10000000);*/

	int len = printf("men are %#x  done\n", 50);
      int len2 = _printf("men are %#x  done\n", 50);
       printf("%i  %i\n" , len, len2);
       _printf("%i\n", len2);
}
