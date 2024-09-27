int	ft_atoi(const char *str)
{
	int i;
	int alah;
	int sum;

	i = 0;
	alah = 1;
	sum = 0;
	while(str[i] && (str[i] == ' ' || (str[i] <= 13 && str[i] >= 9)))
		i++;
	while(str[i] && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			alah *= -1;
		i++;
	}
	while(str[i] && (str[i] <= 57 && str[i] >= 48))
	{
		sum = sum * 10 + (str[i] - '0');
		i++;
	}
	return (sum * alah);
}
