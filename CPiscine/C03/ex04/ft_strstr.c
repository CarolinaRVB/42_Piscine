/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 18:48:56 by crebelo-          #+#    #+#             */
/*   Updated: 2023/03/15 18:58:44 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;
	char	*f;

	i = 0;
	j = 0;
	if (*to_find == '\0')
		return (str);
	while (str[i] != '\0')
	{
		f = &str[i];
		while (str[i] == to_find[j] && to_find[j] != '\0')
		{
			i++;
			j++;
		}
		if (to_find[j] == '\0')
		{
			return (f);
		}
		i++;
		j = 0;
	}
	return (0);
}
/*int	main()
{
	char	str[] = "42 is in Lisbon";
	char	to_find[] = "in";
	char	*i;

	i = ft_strstr(str, to_find);

	printf("%s", i);
}*/
