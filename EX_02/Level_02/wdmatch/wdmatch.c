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

int		main(int ac, char **av)
{
	int i;
	int j;

	if (ac == 3)
	{
		i = 0;
		j = 0;
		while (av[1][i] != '\0' && av[2][j] != '\0')
		{
			if (av[1][i] == av[2][j])
				i++;
			j++;
		}
		if (av[1][i] == '\0')
			ft_putstr(av[1]);
	}
	write(1, "\n", 1);
	return (0);
}
