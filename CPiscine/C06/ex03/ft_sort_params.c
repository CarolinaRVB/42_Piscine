/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 09:29:04 by crebelo-          #+#    #+#             */
/*   Updated: 2023/03/20 20:35:46 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print(int argc, char *argv[])
{
	int	i;
	int	c;
	int	j;

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

void	ft_swap(char *argv1[], char *argv2[])
{
	char	*temp;

	temp = *argv1;
	*argv1 = *argv2;
	*argv2 = temp;
}

int	ft_compare(char *argv1, char *argv2)
{
	int	i;

	i = 0;
	while (argv1[i] != '\0' || argv2[i] != '\0')
	{
		if (argv1[i] == argv2[i])
		{
			i++;
		}
		else
		{
			return (argv1[i] - argv2[i]);
		}
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;
	int	comp;

	i = 1;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			comp = ft_compare(argv[i], argv[j]);
			if (comp > 0)
			{
				ft_swap(&argv[i], &argv[j]);
			}
			j++;
		}
		i++;
	}
	ft_print(argc, argv);
	return (0);
}
