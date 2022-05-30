#include <unistd.h>

void	ft_putchar(char c);

void	ft_putnbrt(long long int nb)
{
	char	str[21];
	int	count = 0;

	if (nb == 0)
	{
		str[count] = '0';
		count ++;
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		str[count] = ('0' - (nb % 10));
		count ++;
		nb = (nb / -10);
	}
	while (nb > 0)
	{
		str[count] = ('0' + (nb % 10));
		count ++;
		nb = (nb / 10);
	}
	str[count] = '\0';
	count --;
	while (count >= 0)
	{
		ft_putchar(str[count]);
		count --;
	}
	ft_putchar('\n');
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}
