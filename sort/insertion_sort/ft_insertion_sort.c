int	*ft_insertion_sort(int argc, int *argv)
{
	int	count = 1;
	int	mindx = 0;
	int	aux = 0;
	while (count < argc)
	{
		mindx = count;
		while (mindx > 0)
		{
			if (argv[mindx] < argv[mindx - 1])
			{
				aux = argv[mindx - 1];
				argv[mindx - 1] = argv[mindx];
				argv[mindx] = aux;
			}
			else
				break;
			mindx --;
		}
		count ++;
	}
	return (argv);
}
