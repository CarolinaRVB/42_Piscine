/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpetrukh <dpetrukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 09:42:12 by dpetrukh          #+#    #+#             */
/*   Updated: 2023/03/19 18:19:19 by dpetrukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	int	primo = -2147483648;
	if (ft_is_prime(primo))
		printf("E primo! Retornou %i", ft_is_prime(primo));
	else
		printf("Nao e primo. Retornou %i", ft_is_prime(primo));
}
*/
