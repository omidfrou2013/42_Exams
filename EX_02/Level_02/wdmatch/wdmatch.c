#include <unistd.h>

void	ft_putstr(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int		ft_strlen(char *str)
{
	int i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		main(int ac, char **av)
{
	int i;
	int j;
	int wdlen;

	if (ac == 3)
	{
		i = 0;
		j = 0;
		wdlen = 0;

		while (av[2][j] != '\0' && av[1][i] != '\0')
		{
			if (av[1][i] == av[2][j])
			{
				wdlen++;
				i++;
			}
			j++;
		}

		if (wdlen == ft_strlen(av[1]))
			ft_putstr(av[1]);
	}
	write(1, "\n", 1);
	return (0);
}
