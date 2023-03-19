/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 11:56:50 by crebelo-          #+#    #+#             */
/*   Updated: 2023/03/16 16:04:38 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	main(int argc, char *argv[])
{
	char	c;
	int	i;

	i = 0;
	//argc = 1;
	while (argv[0][i] != '\0')
	{
		c = argv[0][i];
		write(1, &c, 1);
		i++;
	}
	return (0);
}
/*int	main(int argc, char *argv[])
{
	argc = 1;
	write(1, argv[0], 7);

	return (0);
}*/
