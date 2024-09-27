#include <unistd.h>

int check1(char *str, char letter)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == letter)
			return (0);
		i++;
	}
	return (1);
}

int check(char *str, char letter, int num)
{
	int i;

	i = 0;
	while(str[i] && i < num)
	{
		if (str[i] == letter)
			return (0);
		i++;
	}
	return (1);
}

int main(int argc, char *argv[])
{
	int i;

	i = 0;
	if (argc == 3)
	{
		while (argv[1][i])
		{
			if(check(argv[1], argv[1][i], i))
				write(1, &argv[1][i], 1);
			i++;
		}
		i = 0;
		while (argv[2][i])
		{
			if(check1(argv[1], argv[2][i]))
				if(check(argv[2], argv[2][i], i))
					write(1, &argv[2][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
