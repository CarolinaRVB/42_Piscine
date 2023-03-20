/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpetrukh <dpetrukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 17:33:26 by dpetrukh          #+#    #+#             */
/*   Updated: 2023/03/20 10:20:21 by dpetrukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb < 0)
		return (0);
	while (i < nb / i)
		i++;
	if (i * i == nb)
		return (i);
	return (0);
}

int	main(void)
{
	printf("%i", ft_sqrt(2147483647));
}
