#include<stdio.h>
#include<unistd.h>

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		write(1, "\n", 1);
		return (0);
	}
	int	i;

	i = 0;
	while (argv[1][i] != '\0')
	{
		if (argv[1][i] == *argv[2])
			argv[1][i] = *argv[3];
		i++;
	}
	i = 0;
	while (argv[1][i] != '\0')
	{
		write(1, &argv[1][i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}

