#include <unistd.h>
#include<stdio.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
int     ft_strlen(char *str)
{
        int     i;

        i = 0;
        while (str[i] != '\0')
        {
                i++;
        }
        return (i);
}

int     check_doubles(char *base)
{
        int     i;
        int     j;

        i = 0;
        while (base[i] != '\0')
        {
                j = i + 1;
                while (base[j] != '\0')
                {
                        if (base[i] == base[j])
                        {
                                return (0);
                        }
                        j++;
                }
                i++;
        }
        return (1);
}

int     check_signs(char *base)
{
        int     i;

        i = 0;
        while (base[i] != '\0')
        {
                if (base[i] == '+' || base[i] == '-')
                {
                        return (0);
                }
                i++;
        }
        return (1);
}

void    ft_putnbr_base(int nbr, char *base)
{     
        int     len;

        len = ft_strlen(base);
        if (len < 2 || !check_doubles(base) || !check_signs(base))
        {
                return ;
        }
	if (nbr == -2147483648)
	{
                ft_putchar('-');
                ft_putchar('2');
                nbr = 147483648;
        }
        if (nbr < 0)
        {
                ft_putchar('-');
                nbr = -nbr;
        }
        if (nbr >= len)
        {
                ft_putnbr_base(nbr / len, base);
        }
        ft_putchar(base[nbr % len]);
}

int	main()
{
	int nbr = -2147483648;
	char *base = "0123456789";
	ft_putnbr_base(nbr, base);
	return (0);
}
