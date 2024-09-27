#include <unistd.h>

int main(void)
{
	char a = 57;

	while (a >= 48)
	{
		write (1, &a, 1);
		a--;
	}
	write(1, "\n", 1);
	return (0);
}
