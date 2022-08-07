#include <stdio.h>
#include "sorthin.h"

void	ft_print_seq(int *argv, int argc);

int	main(void)
{
	int	argc = 9;
	int	argv[] = {5, 9, 3, 1, 2, 8, 4, 7, 6};
	ft_print_seq(argv, argc);
	insertion_sort(argc, argv);
	ft_print_seq(argv, argc);
	return (0);
}

void	ft_print_seq(int *argv, int argc)
{
	int	x = 0;

	while (x <= (argc -1))
	{
		printf("%i", argv[x]);
		if (x != (argc - 1))
			printf(", ");
		x ++;
	}
	printf("\n");
}
