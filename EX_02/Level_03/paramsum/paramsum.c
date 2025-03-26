#include <unistd.h>

void	ft_putnbr(int nb)
{
	char c;
	if (nb > 9)
		ft_putnbr(nb / 10);
	c = nb % 10 + '0';
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
	(void)av;
	ac--;
	ft_putnbr(ac);
	write(1, &"\n", 1);
	return (0);
}
