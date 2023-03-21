/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 09:49:26 by crebelo-          #+#    #+#             */
/*   Updated: 2023/03/21 16:05:47 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i < nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 1;
	if (nb < 2)
		return (2);
	if (ft_is_prime(nb) == 0)
	{
		nb = nb + 1;
		ft_is_prime(nb);
	}
	return (nb);
}
/*int	main()
{
	printf("%d", ft_find_next_prime(1));
}*/
