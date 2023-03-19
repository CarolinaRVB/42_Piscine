
#include <unistd.h>
int     main(int argc, char *argv[])
{
        int     i;
        int     c;
        int     j;

        i = 1;
        while (argc > 0 && argv[i] != 0)
        {
                j = 0;
                while (argv[i][j] != '\0')
                {
                        c = argv[argc - i][j];
                        write(1, &c, 1);
                        j++;
                }
                write(1, "\n", 1);
                i++;
        }
	return (0);
}
