/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter_separated.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 14:33:01 by crebelo-          #+#    #+#             */
/*   Updated: 2023/03/22 16:55:03 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
int	check_doubles(int i, char c, char *str)
{
	int	j;

	j = 0;
	while (j < i)
	{
		if (str[j] == c)
			return (1);
		j++;
	}
	return (0);
}

void	ft_inter(char *argv1, char *argv2)
{
	int     i;
        int     j;

        i = 0;
        j = 0;
	while (argv1[i] != '\0')
        {
                j = 0;
                while (argv2[j] != '\0')
                {
                        if (argv1[i] == argv2[j])
                        {
                                if (check_doubles(i, argv1[i], argv1) == 0)
                                {
                                        write(1, &argv1[i], 1);
                                        break ;
                                }
                        }
                        j++;
                }
                i++;
        }

}

int	main(int argc, char *argv[])
{
	if (argc == 3)
		ft_inter(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}

