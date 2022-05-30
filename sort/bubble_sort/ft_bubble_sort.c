
int *ft_bubble_sort(int argc, int *argv)
{
	int	point;
	int	limit = 0;
	int	aux;

	argc --;
	while (limit < argc)
	{
		point = argc;
		while (point > limit)
		{
			if (argv[point] < argv[(point - 1)])
			{
				aux = argv[point];
				argv[point] = argv[(point - 1)];
				argv[(point - 1)] = aux;
			}
			point --;
		}
		limit ++;
	}
	return (argv);
}
