#include<stdio.h>
int	ft_recursive_factorial(int nb)
{
	int	i;

	i = 1;
	if (nb < 0 || nb > 9)
                return (0);
	if (nb == 0 || nb == 1)
		return (1);
	return(nb * ft_recursive_factorial(nb - i));
}
int	main()
{
	int nb = 5;
	printf("%d", ft_recursive_factorial(nb));
}
