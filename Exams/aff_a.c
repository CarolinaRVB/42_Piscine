<<<<<<< HEAD
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 09:41:32 by crebelo-          #+#    #+#             */
/*   Updated: 2023/03/17 10:12:59 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

//Program with function inside main

=======
#include<unistd.h>
>>>>>>> 318fb492faf739ba2047062cae667e7f9f1555ba
int	main(int argc, char *argv[])
{
	int	i;

	i = 0;
	if (argc != 2)
	{
<<<<<<< HEAD
		write(1, "a\n", 2);
		return (0);
=======
		write(1, "a\n", 1);
		return(0);
>>>>>>> 318fb492faf739ba2047062cae667e7f9f1555ba
	}
	while (argv[1][i] != '\0')
	{
		if (argv[1][i] == 'a')
		{
<<<<<<< HEAD
			write(1, "a\n", 2);
			return (0);
		}
		i++;
	}
	write (1, "\n", 1);
	return (0);
}

// Program with main separated from function.
// In this case it's necessary to indicate the conditions for argc and argv
// in the main. Here we say the aff_a function should only take the argument
// from positon one, which will be the string input.

/*
void	aff_a(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == 'a')
		{
			write(1, "a\n", 1);
=======
			write(1, "a", 1);
>>>>>>> 318fb492faf739ba2047062cae667e7f9f1555ba
		}
		i++;
	}
	write(1, "\n", 1);
<<<<<<< HEAD
}
int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		write(1, "a\n", 1);
		return (1);
	}
	aff_a(argv[1]);
	return (0);
}
*/
=======
	return (0);
}
>>>>>>> 318fb492faf739ba2047062cae667e7f9f1555ba
