int		ft_atoi(const char *str)
{
	int i = 0;
	int n = 1;
	int result = 0;

	while (str[i] <= 32)
		i++;
	if (str[i] == '-')
	{
		n = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	return (result * n);
}
