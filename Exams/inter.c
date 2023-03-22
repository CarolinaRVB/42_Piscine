/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 14:33:01 by crebelo-          #+#    #+#             */
/*   Updated: 2023/03/22 16:55:54 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
int	check_doubles(int i, char c, char *str)
{
	int	j;

	j = 0;
	while (j < i)
	{
		if (str[j] == c)
			return (1);
		j++;
	}
	return (0);
}


int	main(int argc, char *argv[])
{
	if (argc != 3)
	{
		write(1, "\n", 1);
		return (0);
	}

	int	i;
	int	j;

	i = 0;
	j = 0;
	while (argv[1][i] != '\0')
	{
		j = 0;
		while (argv[2][j] != '\0')
		{
			if (argv[1][i] == argv[2][j])
			{	
				if (check_doubles(i, argv[1][i], argv[1]) == 0)
                        	{
					write(1, &argv[1][i], 1);
					break ;
				}
			}
			j++;
		}
		i++;
	}
	write(1, "\n", 1);
	return (0);
}

