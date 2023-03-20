/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpetrukh <dpetrukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:41:06 by dpetrukh          #+#    #+#             */
/*   Updated: 2023/03/15 10:36:57 by dpetrukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include<stdio.h>
*/
int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
/*
int main(void)
{
	printf("Resultado = %i", ft_fibonacci(20));
}
*/
