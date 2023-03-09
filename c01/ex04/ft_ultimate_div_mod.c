/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 16:26:56 by crebelo-          #+#    #+#             */
/*   Updated: 2023/03/09 15:50:46 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tempa;
	int	tempb;
	int	d;
	int	e;

	d = *a;
	e = *b;
	tempa = (d / e);
	tempb = (d % e);
	*a = tempa;
	*b = tempb;
}
