/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuz_index.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 19:54:29 by crebelo-          #+#    #+#             */
/*   Updated: 2023/03/21 20:35:47 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_strlen(char *str)
{
	int	i;
	
	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_print(char *str)
{
	int	i;
	int	c;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		write(1, &c, 1);
		i++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(argv[1]);
	while (argc > 1 && argv[1][i] != '\0')
	{
		while (i < len)
		{
			if (i % 5 == 0)
				argv[1][i] = '5';
			if (i % 3 == 0)
				argv[1][i] = '3';
			if ((i % 5 == 0) && (i % 3 == 0))
				argv[1][i] = '5';
			i++;
		}
	}
	ft_print(argv[1]);
}
