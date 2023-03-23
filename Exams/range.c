#include<stdlib.h>
#include<stdio.h>
int	*ft_range(int start, int end)
{
	int	size;
	int	*arr;
	int	i;

	i = 0;
	size = end - start;
	arr = malloc(size * 4);
	while (i <= size)
	{
		arr[i] = start;
		start++;
		i++;
	}
	return (arr);
}
int	main()
{
	int	i;
	int	start = 1;
	int	end = 3;
	int	*arr;
	arr = ft_range(start, end);

	i = 0;
	while (arr[i] != '\0')
	{
		printf("%d", arr[i]);
		i++;
	}
	return (0);
}

