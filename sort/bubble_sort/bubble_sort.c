
int *bubble_sort(int len, int *array)
{
	int	point;
	int	limit = 0;
	int	aux;

	len --;
	while (limit < len)
	{
		point = len;
		while (point > limit)
		{
			if (array[point] < array[(point - 1)])
			{
				aux = array[point];
				array[point] = array[(point - 1)];
				array[(point - 1)] = aux;
			}
			point --;
		}
		limit ++;
	}
	return (array);
}

int *bubble_sort(int len, int *array)
{
	int aux;
	int key = 1;
	while (key)
	{
		key = 0;
		for (int i = 0; i < (len - 1); i++)
		{
			if (array[i] > array[i + 1])
			{
				aux = array[i];
				array[i] = array[i + 1];
				array[i + 1] = aux;
				key = 1;
			}
		}
	}
}
