/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcosta-p <rcosta-p@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 13:00:37 by rcosta-p          #+#    #+#             */
/*   Updated: 2023/03/15 18:56:32 by rcosta-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <limits.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/*int	ft_check_errors(char *base)
{
	int	i_1;
	int	i_2;

	i_1 = 0;
	while (base[i_1] != '\0')
	{
		i_2 = i_1;
		while (base[i_2] != '\0')
		{
			if (base[i_1] == '-' || base[i_1] == '+')
				return (0);
			if (base[i_1] == base[i_2] && i_1 != i_2)
				return (0);
			i_2++;
		}
		i_1++;
	}
	if (i_1 < 2)
		return (0);
	return (1);
}

void	ft_putnbr(int nbr)
{
	if (nbr <= INT_MAX && nbr >= INT_MIN)
	{
		if (nbr == INT_MIN)
		{
			ft_putchar('-');
			ft_putchar('2');
			nbr = 147483648;
		}
		else if (nbr > 9)
		{
			ft_putnbr(nbr / 10);
			ft_putnbr(nbr % 10);
		}
		else if (nbr < 0)
		{
			ft_putchar('-');
			nbr = -nbr;
		}
		else
			ft_putchar(nbr + '0');
	}
}

void	ft_base_print(char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		ft_putchar(base[i]);
		i++;
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	if (!ft_check_errors(base))
		return (0);
	ft_putnbr(nbr);
	ft_base_print(base);	
	return (nbr, base);
}

int	main(void)
{
	ft_putnbr_base(123, "rafa");
	printf("%d, %d", ft_putnbr_base(123, "rafa"));
}*/
