/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 15:24:02 by crebelo-          #+#    #+#             */
/*   Updated: 2023/03/15 19:40:07 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
int	size_str(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	len;

	j = 0;
	i = 0;
	len = size_str(dest);
	while (dest[j] != '\0')
	{
		j++;
	}
	if (j > size || size == 0)
	{
		return (j + size);
	}
	while (src[i] != '\0' && i < size - j - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (len + size_str(src));
}
/*int	main()
{
	char dest[10] = "Hello";
    	char src[] = " world!";
    	unsigned int size = 20;

    	printf("%u", ft_strlcat(dest, src, size));
    	return 0;
}*/
