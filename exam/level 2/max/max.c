int	max(int* tab, unsigned int len)
{
	int i;
	int max;

	i = 0;
	if (len <= 0)
		return (0);
	if (len == 1)
		return (tab[0]);
	max = tab[0];
	while(i < len - 1)
	{
		if(max < tab[i])
			max = tab[i];
		i++;
	}
	return (max);
}
