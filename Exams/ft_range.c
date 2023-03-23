#include<stdio.h>
#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;

	i = 0;
	arr = malloc((max - min) * 4);
	if (min >= max)
		return (NULL);
	while (min < max)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}

int	main()
{
	int min = 1;
	int max = 10;
	int i = 0;
	int *arr = ft_range(min, max);
	
	while (i < max - min)
	{
		printf("%d\n", arr[i]);
		i++;
	}
	free(arr);
}
