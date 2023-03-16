/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 19:58:59 by crebelo-          #+#    #+#             */
/*   Updated: 2023/03/13 17:34:41 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (' ' > str[i] || str[i] > '~')
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*int	main()
{
	printf("A string e :%d \n", ft_str_is_printable("++--"));
	printf("A string e :%d \n", ft_str_is_printable(""));
	printf("A string e :%d \n", ft_str_is_printable("\n"));
	printf("A string e :%d \n", ft_str_is_printable("ABCDEFHRG"));

	return (0);
}*/
