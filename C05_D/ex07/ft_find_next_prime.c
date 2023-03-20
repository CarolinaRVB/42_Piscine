/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpetrukh <dpetrukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 10:14:36 by dpetrukh          #+#    #+#             */
/*   Updated: 2023/03/19 18:55:08 by dpetrukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		nb = 2;
	if (!ft_is_prime(nb))
	{
		while (!ft_is_prime(nb))
			nb++;
	}
	return (nb);
}
/*
int	main(void)
{
	printf("%i", ft_find_next_prime(2134748364));
}
*/
