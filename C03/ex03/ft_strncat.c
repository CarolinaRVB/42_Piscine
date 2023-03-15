/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 11:07:15 by crebelo-          #+#    #+#             */
/*   Updated: 2023/03/15 18:50:25 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	j = 0;
	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	while (dest[i] != '\0')
	{
		dest[i] = '\0';
	}
	return (dest);
}
/*int	main()
{
	char	dest[] = "hello";
	char	src[] = " world";
	char	*str;
	unsigned int	nb;

	nb = 2;
	str = ft_strncat(dest, src, nb);
	printf("%s", str);
}*/
