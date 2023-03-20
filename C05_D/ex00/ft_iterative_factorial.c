/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpetrukh <dpetrukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 12:07:22 by dpetrukh          #+#    #+#             */
/*   Updated: 2023/03/15 10:33:36 by dpetrukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include<stdio.h>
*/
int	ft_iterative_factorial(int nb)
{
	int	i;
	int	result;

	i = 0;
	result = 1;
	if (nb < 0)
		return (0);
	while (i < nb)
	{
		result = result * (nb - i);
		i++;
	}
	return (result);
}
/*
int	main(void)
{
	printf("\nResultado Final: %i", ft_iterative_factorial(-20));
}
*/
