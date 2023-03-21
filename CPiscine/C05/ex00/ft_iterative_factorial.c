/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 11:10:43 by crebelo-          #+#    #+#             */
/*   Updated: 2023/03/21 14:23:23 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	result;

	result = 1;
	i = 1;
	if (nb < 0)
		return (0);
	while (i < nb)
	{
		result  = result * (nb - i);
		i++;
	}
	return (result);
}
int	main()
{
	int	nb = 0;
	printf("%d", ft_iterative_factorial(nb));
}
