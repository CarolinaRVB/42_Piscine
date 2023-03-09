/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 16:25:37 by crebelo-          #+#    #+#             */
/*   Updated: 2023/03/09 18:25:54 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;		
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	dest[n] = '\0';
	return dest;
}

int	main()
{
	char	a[] = "ololaolaa";
	char	b[4];
	int	n;
	n = 4;
	
	ft_strncpy(b, a, n);
	
	printf("%s\n", b);

	return 0;
}
