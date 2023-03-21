/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   interval_space.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 16:34:27 by crebelo-          #+#    #+#             */
/*   Updated: 2023/03/21 17:22:49 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	c;
	int	len;

	i = 0;
	len = ft_strlen(argv[1]);
	while (argc > 1 )
	{
		while (argv[1][i] != '\0')
		{
			if(i < len - 1)
			{
				c = argv[1][i];
				write(1, &c, 1);
				write(1, " ", 1);
				write(1, " ", 1);
				write(1, " ", 1);
			}
			if( i == len - 1)
			{
	        	        c = argv[1][i];
				write(1, &c, 1);
				write(1, "\n", 1);
				return (0);
			}
			i++;
		}
	}
}
