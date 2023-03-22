/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 09:08:33 by crebelo-          #+#    #+#             */
/*   Updated: 2023/03/22 13:17:35 by crebelo-         ###   ########.fr       */
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
        if (argc != 2)
	{
               write(1, "\n", 1);
	       return (0);
	}

	int	i;
	int	len;
	char	j;

	len = ft_strlen(argv[1]);
	i = len - 1;
	while (argv[1][i] == ' ' || ('\a' <= argv[1][i] && argv[1][i] <= '\r'))
		i--;
	while (argv[1][i] != ' ' &&  (argv[1][i] < '\a' || argv[1][i] > '\r'))
		i--;
	i++;
	while (argv[1][i] != '\0' &&  (argv[1][i] != ' ' || ('\a' <= argv[1][i] && argv[1][i] <= '\r')))
	{
		j = argv[1][i];
		write(1, &j, 1);
		i++;
	}
		write(1, "\n", 1);
	return (0);
}
