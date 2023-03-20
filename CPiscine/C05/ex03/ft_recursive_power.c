/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 14:27:35 by crebelo-          #+#    #+#             */
/*   Updated: 2023/03/20 14:31:57 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	i;

	i = 1;
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
	{
		return (1);
	}
	if (power > 0)
	{
		nb = nb * ft_recursive_power(nb, power - i);
	}
	return (nb);
}
/*
int	main()
{
	printf("%d", ft_recursive_power(2, 5));
}*/
