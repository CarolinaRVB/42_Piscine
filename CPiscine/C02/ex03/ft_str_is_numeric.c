/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 19:56:17 by crebelo-          #+#    #+#             */
/*   Updated: 2023/03/13 17:19:59 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ('0' > str[i] || str[i] > '9')
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*int     main()
{
	printf("A string e :%d \n", ft_str_is_numeric("abcderfgh"));
	printf("A string e :%d \n", ft_str_is_numeric(""));
	printf("A string e :%d \n", ft_str_is_numeric("123456789"));
	printf("A string e :%d \n", ft_str_is_numeric("ABCD1FHRG"));

	return (0);
}*/
