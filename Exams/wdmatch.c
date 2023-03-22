/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 17:44:24 by crebelo-          #+#    #+#             */
/*   Updated: 2023/03/22 18:47:09 by crebelo-         ###   ########.fr       */
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

void	ft_write(char *str)
{
	int	i;
	
	i = 0;
	while (str[i] != '\0')
	{
		write(1, 
}

int	main(int argc, char *argv[])
{
	if (argc != 3)
		write(1, "\n", 1);
	int	i;
	int	j;
	int	count;
	int	len;
	
	i = 0;
	j = 0;
	count = 0;
	len = ft_strlen(argv[1]);
	while (argv[1][i] != '\0')
	{
		while (argv[2][j] != '\0')
		{
			if (argv[1][i] == argv[2][j])
				count++;
			j++;
		}
		i++;
	}
	if (count == len)
		ft_write(argvi[1]);
	else
		return (0);
}
