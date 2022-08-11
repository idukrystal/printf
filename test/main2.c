#include "../main.h"

int main()
{
/**	for (long i = 1000000; i < 1000100; i++)
	{
		_printf("%i   %p\n", i,i);
		}

	_printf("Address:[%p]\n", -10000000);
    printf("Address:[%p]\n", -10000000);*/

	int len = printf("%R\n", "mark");
      int len2 = _printf("%R\n", "mark");
       printf("%i  %i\n" , len, len2);
       _printf("%i\n", len2);
}
