#include <stdlib.h>

char (*get_conversion_function(char c))(void *)
{
	switch (c)
	{
	case 'c':
		//return convert_char
		;
	}
	return NULL;
}

char *convert_char(void *c)
{
	char *tmp = malloc(sizeof(char) * 2);
	tmp[0] = *((char *)c);
	tmp[1] = '\0';
	return tmp;
}
