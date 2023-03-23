int	sqrt(int nb)
{
	int	i;
	
	i = 0;
	if (nb < 0)
		return (0);
	while (nb/i > i)
		i++;
	if (i * i == nb)
		return (i);
	return (0);
}

