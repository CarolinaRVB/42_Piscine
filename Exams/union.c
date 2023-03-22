/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 16:20:39 by crebelo-          #+#    #+#             */
/*   Updated: 2023/03/22 17:43:13 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	check_doubles1(int i, char c, char *str)
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

int	check_doubles2(char c, char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}
void	ft_union(char *argv1, char *argv2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (argv1[i] != '\0')
	{
		if (check_doubles1(i, argv1[i], argv1) == 0)
			write(1, &argv1[i], 1);
		i++;
	}
	while (argv2[j] != '\0')
	{
		if (check_doubles2(argv2[j], argv1) == 0)
			write(1, &argv2[j], 1);
		j++;
	}

}


int	main(int argc, char *argv[])
{
	if (argc == 3)
		ft_union(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}
