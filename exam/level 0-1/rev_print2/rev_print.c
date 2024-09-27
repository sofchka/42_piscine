#include <unistd.h>

char *rev_print(char *str)
{
	int length = 0;
	while (str[length])
		length++;
	while (length > 0)
	{
		write(1, &str[length - 1], 1);
		length--;
	}
	write(1, "\n", 1);
	return (str);
}

