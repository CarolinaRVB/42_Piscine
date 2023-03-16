/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 09:15:18 by crebelo-          #+#    #+#             */
/*   Updated: 2023/03/15 18:31:04 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*int	main()
{
	char	s1[] = "hi";
	char	s2[] = "bye";
	char	s3[] = "aaaaaaabcd";
	char	s4[] = "aaaaaabcdg";

	printf("Result of 'hi' vs 'bye': %d \n",ft_strcmp(s1, s2));
	printf("Result of 'aaaaaaabcd' vs 'aaaaaabcdg': %d \n",ft_strcmp(s3, s4));
}*/
