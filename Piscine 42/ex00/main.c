int	main(int argc, char **argv)
{
	int	i;
	int	sum;

	i = 0;
	while (argv[1][i] != '\0')
	{
		write(1, &argv[1][i], 1);
		i++;
	}


	while (argv[1][i] >= '0' && argv[1][i] <= '9')
	{
		sum = (sum * 10) + (argv[1][i] - '0');
		i++;
	}

	
}
