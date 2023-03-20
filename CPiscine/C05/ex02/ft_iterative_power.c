/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 11:15:51 by crebelo-          #+#    #+#             */
/*   Updated: 2023/03/20 11:33:18 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	i = 1;
	result = nb;
	if (nb == 0 || power == 0)
		return (0);
	while (i < power)
	{
		result = result * nb;
		i++;
	}
	return (result);
}
int	main()
{
	int nb = 2;
	int power = 5;
	printf("%d", ft_iterative_power(nb, power));
	return (0);
}
