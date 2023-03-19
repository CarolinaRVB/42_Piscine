#include<unistd.h>
void    ft_print(int argc, char *argv[])
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

void	ft_swap(int j, char *argv[])
{
        char    *temp;


	temp = argv[j + 1];
        argv[j + 1] = argv[j];
        argv[j] = temp;
}

int	ft_compare(int j, int i, int g, char *argv[])
{
	int	comp;

	comp = 0;

	while (argv[j][i] != '\0' && argv[j + 1][g] != '\0') 
	{
        	if (argv[j][i] == argv[j + 1][g]) {
            	i++;
            	g++;
        	} 
		else {
            		comp = argv[j][i] - argv[j + 1][g];
            		break;
        	}
    	}
    	return comp;
}


int     main(int argc, char *argv[])
{
        int     i;
        int     j;
        int     g;
	int	comp;

        i = 0;
        j = 1;
        g = 0;
        if (argc < 2)
                return (0);
        while (j < argc - 1)
        {
		comp = ft_compare(j, i, g, argv);
                if (comp > 0)
                {
                        ft_swap(j, argv);
                        j = 0;
                }
                else
                        j++;
        }
        ft_print(argc, argv);
        return (0);
}
