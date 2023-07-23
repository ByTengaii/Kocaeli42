#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{

	if (nb == -2147483648)
	{
		write(1, "-2", 2);
		nb = 147483648
	}

	if ( nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}

	if (nb < 10)
	{
		ft_putchar(nb + '0');
		return ;
	}
	else
		ft_putnbr(nb / 10);
	ft_putnbr(nb % 10);
}
