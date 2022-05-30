int	*ft_selection_sort(int argc, int *argv)
{
	int	count = 0;
	int	aux;
	int	mindx;

	while (count < argc)
	{
		mindx = (count);
		aux = (count + 1);
		while (aux < argc)
		{
			if (argv[mindx] > argv[aux])
				mindx = aux;
			aux ++;
		}
		aux = argv[count];
		argv[count] = argv[mindx];
		argv[mindx] = aux;
		count ++;
	}
	return (argv);
}
