#include<unistd.h>
void	ft_print(int argc, char *argv[])
{
	int     i;
        int     c;
        int     j;

        i = 1;
        while (i < argc)
        {
		if (argv[i] != NULL)
		{
                j = 0;
                while (argv[i][j] != '\0')
                {
                        c = argv[i][j];
                        write(1, &c, 1);
                        j++;
                }
                write(1, "\n", 1);
		}
                i++;
        }
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;
	int	g;
	int	comp;
	char	*temp;

	i = 0;
	j = 1;
	g = 0;
	if (argc < 2)
	{
		return (0);
	}
	while (j < argc - 1)
	{
		i = 0;
		g = 0;
		while (argv[j][i] != '\0' && argv[j + 1][g] != '\0')
		{
			if (argv[j][i] == argv[j + 1][g])
			{
				i++;
				g++;
			}
			else
			{
				comp = argv[j][i] - argv[j + 1][g];
				break;
			}
		}	
		if (comp > 0)
		{
			temp = argv[j + 1];
			argv[j + 1] = argv[j];
			argv[j] = temp;
			j = 0;
		}
		else
			j++;
	}
	ft_print(argc, argv);
	return (0);
}





