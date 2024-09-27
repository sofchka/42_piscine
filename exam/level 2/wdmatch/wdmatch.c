#include <unistd.h>

void putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int main(int argc, char *argv[])
{
	int i;
	int j;
	int wd;

	i = 0;
	j = 0;
	wd = 0;
	if (argc == 3)
	{
		while (argv[1][i])
		{
			while (argv[2][j])
			{
				if (argv[1][i] == argv[2][j])
				{
					wd++;
					break;
				}
				j++;
			}
			i++;
		}
		if (wd == ft_strlen(argv[1]))
			putstr(argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}
