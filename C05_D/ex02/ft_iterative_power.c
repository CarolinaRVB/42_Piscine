/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpetrukh <dpetrukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 12:51:11 by dpetrukh          #+#    #+#             */
/*   Updated: 2023/03/15 10:27:08 by dpetrukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include<stdio.h>
*/
int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	while (power > 0)
	{
		result = result * nb;
		power--;
	}
	return (result);
}
/*
int	main(void)
{
	printf("Resultado e = %i", ft_iterative_power(0, -50));
}
*/
