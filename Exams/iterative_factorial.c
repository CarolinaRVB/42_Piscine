#include<stdio.h>
int	ft_iterative_factorial(int nb)
{
	int	i;
	int	res;

	i = 0;
	res = 1;
	if (nb < 0)
		return (0);
	while (i < nb)
	{
	       res = res * (nb - i);
	       i++;
	}
	return (res);
}
int	main()
{
	int	nb = 5;
	printf("%d", ft_iterative_factorial(nb));
}
