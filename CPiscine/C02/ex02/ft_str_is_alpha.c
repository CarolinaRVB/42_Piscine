/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2i023/03/11 19:55:04 by crebelo-         #+#    #+#             */
/*   Updated: 2023/03/13 17:11:02 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ('A' > str[i] || (str[i] > 'Z' && str[i] < 'a') || str[i] > 'z')
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*int	main()
{
	printf("A string e :%d \n", ft_str_is_alpha("abcderfgh"));
	printf("A string e :%d \n", ft_str_is_alpha(""));
	printf("A string e :%d \n", ft_str_is_alpha("123456789"));
	printf("A string e :%d \n", ft_str_is_alpha("ABCDEFHRG"));

	return (0);
}*/
