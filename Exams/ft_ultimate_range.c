#include<stdio.h>
#include<stdlib.h>
int	ft_ultimate_range(int **range, int min, int max)
{
	int	*array;
	int	i;
	int	size;

	size = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	array = malloc((max - min) * 4);
	if (array == NULL)
	{
		*range = NULL;
		return (-1);
	}
	*range = array;
	i = 0;
	while (min < max)
	{
		array[i] = min;
		i++;
		min++;
	}
	return (size);
}

int	main()
{
	int	*arr;
	int min = 1;
	int max = 10;
	int size = max - min;
	printf("%d", ft_ultimate_range(&arr, min, max));
}
