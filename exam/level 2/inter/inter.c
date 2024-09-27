#include <unistd.h>

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
	int j;

	i = 0;
	if (argc == 3)
	{
		while(argv[1][i])
		{
			j = 0;
			while(argv[2][j])
			{
				if(argv[1][i] == argv[2][j])
					if(check(argv[1], argv[1][i], i))
					{
						write(1, &argv[1][i], 1);
						break;
					}
				j++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
