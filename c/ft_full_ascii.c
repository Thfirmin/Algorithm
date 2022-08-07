#include <unistd.h>

void	ft_putchar (char c);

void	ft_putnbr(int nbr);

void	ft_full_ascii(void)
{
	int	ascii;
	int	count;

	ascii = 0;
	while (ascii <= 255)
	{
		count = 1;
		while (ascii <= 255 && count <= 8)
		{
			ft_putchar(ascii);
			ft_putchar(' ');
			ft_putnbr(ascii);
			if (count != 8)
				ft_putchar('\t');
			count ++;
			ascii ++;
		}
		ft_putchar('\n');
	}

}

void	ft_putnbr(int nbr)
{
	unsigned int	nb;

	if (nbr < 0)
	{
		ft_putchar('-');
		nb = (nbr * -1);
	}
	else
	{
		nb = nbr;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
	}
	ft_putchar('0' + (nb % 10));
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	main(void)
{
	ft_full_ascii();
	return 0;
}
