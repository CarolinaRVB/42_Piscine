/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 19:57:49 by crebelo-          #+#    #+#             */
/*   Updated: 2023/03/14 20:14:03 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ('a' > str[i] || str[i] > 'z')
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*int     main()
{
	printf("A string e :%d \n", ft_str_is_lowercase("abcdrfgh"));
	printf("A string e :%d \n", ft_str_is_lowercase(""));
	printf("A string e :%d \n", ft_str_is_lowercase("123456789"));
	printf("A string e :%d \n", ft_str_is_lowercase("ABCD1 FHRG"));

	return (0);
}*/
