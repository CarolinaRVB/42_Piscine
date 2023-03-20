/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 09:01:00 by crebelo-          #+#    #+#             */
/*   Updated: 2023/03/20 19:42:26 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	c;
	int	j;

	i = 1;
	while (argc > 1 && argv[i] != 0)
	{
		j = 0;
		while (argv[argc - i][j] != '\0')
		{
			c = argv[argc - i][j];
			write(1, &c, 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
