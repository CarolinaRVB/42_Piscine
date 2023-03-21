/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 17:14:56 by crebelo-          #+#    #+#             */
/*   Updated: 2023/03/21 18:30:23 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (i < nb / i)
	{
		i++;
	}
	if (i * i == nb)
	{
		return (i);
	}
	return (0);
}
int	main()
{
	printf("Square root of %d is %d", 9, ft_sqrt(1640045925));
}	
