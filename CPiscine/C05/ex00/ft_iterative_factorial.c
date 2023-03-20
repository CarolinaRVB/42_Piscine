/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 11:10:43 by crebelo-          #+#    #+#             */
/*   Updated: 2023/03/20 11:11:12 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	input;

	input = nb;
	i = 1;
	if (nb < 0 || nb > 9 || !nb)
		return (0);
	while (i < input)
	{
		nb = nb * i;
		i++;
	}
	return (nb);
}
/*int	main()
{
	int	nb = 5;
	printf("%d", ft_iterative_factorial(nb));
}*/
