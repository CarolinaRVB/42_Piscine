/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toantune <toantune@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 08:27:30 by toantune          #+#    #+#             */
/*   Updated: 2023/03/20 09:48:07 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

int	get_str_size(int size, char **str, char *sep)
{	
	int	i;
	int	c;

	c = 0;
	i = 0;
	while (i < size)
		c += ft_strlen(str[i++]);
	c += (ft_strlen(sep) * (size - 1));
	return (c + 1);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{	
	char	*str;
	int		i;
	int		j;
	int		c;

	str = (char *)malloc(get_str_size(size, strs, sep));
	if (size == 0)
		return (str);
	c = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != 0)
			str[c++] = strs[i][j++];
		j = 0;
		while (sep[j] != 0 && i != size - 1)
			str[c++] = sep[j++];
		i++;
	}
	str[c] = '\0';
	return (str);
}

int	main()
{
	char	*strv[5] = {"STR1", "STR2", "STR3", "STR4", "STR5"};

	printf("\nTEST | ft_strjoin\n");
	printf("\nwant : STR1-O-STR2-O-STR3-O-STR4-O-STR5 \n got : %s\n", ft_strjoin(5, strv, "-O-"));
}
