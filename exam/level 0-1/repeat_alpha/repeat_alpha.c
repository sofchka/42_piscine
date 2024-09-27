#include <unistd.h>

int main(int argc, char *argv[])
{
	int i;
	int alo;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			alo = 1;
			if (argv[1][i] <= 'z' && argv[1][i] >= 'a')
				alo += argv[1][i] - 'a';
			else if (argv[1][i] <= 'Z' && argv[1][i] >= 'A')
				alo += argv[1][i] - 'a';
			while (alo)
			{
				write(1, &argv[1][i], 1);
				alo--;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
