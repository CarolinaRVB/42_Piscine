/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 11:08:19 by crebelo-          #+#    #+#             */
/*   Updated: 2023/03/20 11:10:27 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	i;

	i = 1;
	if (nb < 0 || nb > 9)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	return (nb * ft_recursive_factorial(nb - i));
}
/*int	main()
{
	int nb = 5;
	printf("%d", ft_recursive_factorial(nb));
}*/
