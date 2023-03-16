/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 09:31:18 by crebelo-          #+#    #+#             */
/*   Updated: 2023/03/13 18:00:43 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ('a' <= str[i] && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
/*int	main()
{
	char	str[] = "abc";
	char	str2[] = "ABC";
	char	str3[] = "";
	char	str4[] = "123";

	printf("A string e :%s \n", ft_strupcase(str));
	printf("A string e :%s \n", ft_strupcase(str4));
	printf("A string e :%s \n", ft_strupcase(str2));
	printf("A string e :%s \n", ft_strupcase(str3));

	return (0);
}*/
