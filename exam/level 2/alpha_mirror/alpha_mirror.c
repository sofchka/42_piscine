#include <unistd.h>

int main(int argc, char *argv[])
{
	int i;
	char ltr;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			ltr = argv[1][i];
			if (ltr <= 'Z' && ltr >= 'A')
				ltr = 'Z' - argv[1][i] + 'A';
			if (ltr <= 'z' && ltr >= 'a')
				ltr = 'z' - argv[1][i] + 'a';
			write(1, &ltr, 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
