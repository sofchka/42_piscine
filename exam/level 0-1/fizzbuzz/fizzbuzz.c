#include <unistd.h>

void write_num(int num)
{
	if(num > 9)
		write_num(num /10);
	write(1, &"0123456789"[num % 10], 1);
}

int main(void)
{
	int i;

	i = 1;
	while(i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			write(1, "fizzbuzz", 8);
		else if (i % 3 == 0)
			write(1, "fizz", 4);
		else if (i % 5 == 0)
			write(1, "buzz", 4);
		else
			write_num(i);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
