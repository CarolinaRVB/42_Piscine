int	recursive_power(int nb, int power)
{
	int	i;

	i = 0;
	if (power < 0)
		return (0);
	if (power == 0 && nb == 0)
		return (1);
	while (power > 0)
		return (nb * recursive_power(nb, power - 1));
}
