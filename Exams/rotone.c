/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 10:36:38 by crebelo-          #+#    #+#             */
/*   Updated: 2023/03/17 11:06:14 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	rotone(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
	{
		write(1, "\n", 1);
	}
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'Y') || (str[i] >= 'a' && str[i] <= 'y'))
		{
			str[i] = str[i] + 1;
		}
		if (str[i] == 'Z' || str[i] == 'z')
			str[i] = str[i] - 25;
		write(1, &str[i], 1);
		i++;
	}
}



int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		write (1, "\n", 1);
		return (0);
	}
	rotone (argv[1]);
	return (0);
}
