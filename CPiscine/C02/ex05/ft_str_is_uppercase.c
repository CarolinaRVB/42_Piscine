/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 19:58:24 by crebelo-          #+#    #+#             */
/*   Updated: 2023/03/13 17:27:34 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ('A' > str[i] || str[i] > 'Z')
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*int     main()
{
	printf("A string e :%d \n", ft_str_is_uppercase("abcderfgh"));
	printf("A string e :%d \n", ft_str_is_uppercase(""));
	printf("A string e :%d \n", ft_str_is_uppercase("123456789"));
	printf("A string e :%d \n", ft_str_is_uppercase("ABCDEFHRG"));

	return (0);
}*/
