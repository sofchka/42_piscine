#include <stdlib.h>
#include <stdio.h>

int drakan(int x)
{
	if (x < 0)
		return (-x);
	return (x);
}

int     *ft_range(int start, int end)
{
	int size = drakan(end - start) + 1;
	int i;
	int *tab;

	tab = malloc(size * sizeof(int));
	if (!tab)
		return (0);
	i = 0;
	if (start < end)
	{
		while (i < size)
		{
			tab[i] = start + i;
			i++;
		}
	}
	else if (end < start)
	{
		while (i < size)
		{
			tab[i] = start - i;
			i++;
		}
	}
	else
		tab[0] = start;
	return (tab);
}

int main(void)
{
	int *tab;
	int i;
	int start = 1;
	int end = 3;
	int size = drakan(end - start) + 1;

	tab = ft_range(start, end);
	i = 0;
	while(i < size)
	{
		printf("%i, ", tab[i]);
		i++;
	}
}
