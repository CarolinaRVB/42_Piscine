/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 18:06:42 by crebelo-          #+#    #+#             */
/*   Updated: 2023/03/09 15:46:36 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	temp;
	int	temp2;
	int	g;

	i = 0;
	g = 0;
	while (i < size - 1)
	{	
		g = 0;
		while (g < size - i -1)
		{
			if (tab[g] > tab[g + 1])
			{
				temp = tab[g];
				temp2 = tab[g + 1];
				tab[g + 1] = temp;
				tab[g] = temp2;
			}
			g++;
		}
		i++;
	}
}
