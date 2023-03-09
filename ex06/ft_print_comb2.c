/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 09:22:57 by crebelo-          #+#    #+#             */
/*   Updated: 2023/03/06 09:23:46 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_function(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i < 98)
	{
		j = i + 1;
		while (j < 100)
		{
			write_function('0' + i / 10);
			write_function('0' + i % 10);
			write(1, " ", 1);
			write_function('0' + j / 10);
			write_function('0' + j % 10);
			write(1, ",", 1);
			write(1, " ", 1);
			j++;
		}
		i++;
	}
	write(1, "98 99", 5);
}
