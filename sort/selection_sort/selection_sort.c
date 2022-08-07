int	*selection_sort(int len, int *array)
{
	int	count = 0;
	int	aux;
	int	mindx;

	while (count < len)
	{
		mindx = (count);
		aux = (count + 1);
		while (aux < len)
		{
			if (array[mindx] > array[aux])
				mindx = aux;
			aux ++;
		}
		aux = array[count];
		array[count] = array[mindx];
		array[mindx] = aux;
		count ++;
	}
	return (array);
}
