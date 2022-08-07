int	*insertion_sort(int len, int *array)
{
	int	count = 1;
	int	mindx = 0;
	int	aux = 0;
	while (count < len)
	{
		mindx = count;
		while (mindx > 0)
		{
			if (array[mindx] < array[mindx - 1])
			{
				aux = array[mindx - 1];
				array[mindx - 1] = array[mindx];
				array[mindx] = aux;
			}
			else
				break;
			mindx --;
		}
		count ++;
	}
	return (array);
}
