#include <unistd.h>

int main(int argc, char *argv[])
{
	int i;
	char c;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] <= 'z' && argv[1][i] >= 'a')
				c = argv[1][i] - 32;
			else if (argv[1][i] <= 'Z' && argv[1][i] >= 'A')
				c = argv[1][i] + 32;
			else
				c = argv[1][i];
			write(1, &c, 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
