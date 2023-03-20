/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpetrukh <dpetrukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 12:20:52 by dpetrukh          #+#    #+#             */
/*   Updated: 2023/03/14 12:25:19 by dpetrukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include<stdio.h>
*/
int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 1 || nb == 0)
		return (1);
	return (ft_recursive_factorial(nb - 1) * nb);
}
/*
int     main(void)
{
        printf("%i", ft_recursive_factorial(0));
}
*/
