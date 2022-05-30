int	ft_int_limits(int byte)
{
	int	limit;
	int	aux;

	if (byte < 0)
		limit = (byte - 1);
	else
		limit = byte;
	aux = 1;
	while (aux < 31)
	{
		aux ++;
		byte = (byte * 2);
		limit = (limit + byte);
	}
	return (limit);
}
