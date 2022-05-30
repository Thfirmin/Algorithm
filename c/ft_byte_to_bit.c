#include <unistd.h>

void	ft_putnbr(long long int nbr, unsigned long long int unbyte, int aux);

void	ft_putstr(char *c);

void	ft_putchar(char c);

void	ft_byte_to_bit(long long int byte)
{
	unsigned long long int	unbyte;
	signed long int		limit;
	signed long int		aux;

	limit = (byte * 8);
	ft_putnbr(byte, unbyte, 0);
	ft_putstr("byte = ");
	ft_putnbr(limit, unbyte, 0);
	ft_putstr("bit\n-------------");
	byte = 1;
	aux = 1;
	while (aux < (limit - 1))
	{
		byte = (byte * 2);
		/*ft_putnbr(byte);
		ft_putchar('\n');*/
		aux ++;
	}
	unbyte = ((((byte * 2) - 1) * 2) + 1);
	byte = (((byte - 1) * 2) + 1);
	ft_putstr("\nVAL_MAX: ");
	ft_putnbr(byte, unbyte, 0);
	ft_putstr("\nVAL_MIN: ");
	ft_putnbr(((byte * -1) - 1), unbyte, 0);
	ft_putstr("\nVAL_UNS: ");
	ft_putnbr(byte, unbyte, 1);
	ft_putchar('\n');
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *c)
{
	int	count;

	count = 0;
	while (c[count] != '\0')
	{
		ft_putchar(c[count]);
		count ++;
	}
}

void	ft_putnbr(long long int nbr, unsigned long long int unbyte, int aux)
{
	unsigned long long int	nb;
	if (aux > 0)
	{
		nb = unbyte;
	}
	else if (nbr < 0)
	{
		ft_putchar('-');
		nb = (nbr * -1);
	}
	else
	{
		nb = nbr;
	}
	if (nb >= 10 && aux > 0)
	{
		ft_putnbr(nbr, (nb / 10), 1);
	}
	else if (nb >= 10 && aux == 0)
	{
		ft_putnbr((nb / 10), unbyte, 0);
	}
	ft_putchar('0' + (nb % 10));
}

int	main(void)
{
	ft_byte_to_bit(1);
	ft_putchar('\n');
	ft_byte_to_bit(2);
	ft_putchar('\n');
	ft_byte_to_bit(3);
	ft_putchar('\n');
	ft_byte_to_bit(4);
	ft_putchar('\n');
	ft_byte_to_bit(5);
	ft_putchar('\n');
	ft_byte_to_bit(6);
	ft_putchar('\n');
	ft_byte_to_bit(7);
	ft_putchar('\n');
	ft_byte_to_bit(8);
}

