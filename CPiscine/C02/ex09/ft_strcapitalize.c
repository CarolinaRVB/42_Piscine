/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 10:22:18 by crebelo-          #+#    #+#             */
/*   Updated: 2023/03/14 09:50:02 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
char	*all_small(char *str)
{
	int	j;

	j = 1;
	if ('a' <= str[0] && str[0] <= 'z')
	{
		str[0] = str[0] - 32;
	}
	while (str[j] != '\0')
	{
		if ('A' <= str[j] && str[j] <= 'Z')
		{
			str[j] = str[j] + 32;
		}
		j++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	str = all_small(str);
	i = 1;
	while (str[i] != '\0')
	{
		if ('a' <= str[i] && str[i] <= 'z')
		{
			if (str[i - 1] <= '/' || (str[i - 1] > '9' && str[i - 1] < 'A'))
			{
				str[i] = str[i] - 32;
			}
			else if (str[i -1] > 'Z' && str[i - 1] < 'a')
			{
				str[i] = str[i] - 32;
			}
			else if (str[i - 1] > 'z')
			{
				str[i] = str[i] - 32;
			}
		}
		i++;
	}
	return (str);
}
/*int     main()
{
	char	str[] = "abc ola, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";
	char	str2[] = "ABC ola, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";
	char	str3[] = "";
	char	str4[] = "123";

	printf("A string e :%s \n", ft_strcapitalize(str));
	printf("A string e :%s \n", ft_strcapitalize(str4));
	printf("A string e :%s \n", ft_strcapitalize(str2));
	printf("A string e :%s \n", ft_strcapitalize(str3));

	return (0);
}*/
