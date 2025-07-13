int	ft_atoi(char *str)
{
	int	i;
	int	sum;
	int	negative;

	i = 0;
	negative = 1;
	sum = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
	{
		++i;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			negative = -1;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		sum = (sum * 10) + (str[i] - '0');
		i++;
	}
	return (sum * negative);
}
