/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 10:35:49 by crebelo-          #+#    #+#             */
/*   Updated: 2023/03/16 10:08:01 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0') && (i < n - 1))
	{
		i++;
	}
	if (n == 0)
		return (0);
	return (s1[i] - s2[i]);
}
/*int	main()
{
	char	s1[] = "";
	char	s2[] = "";
	char	s3[] = "aaaaaaabcd";
	char	s4[] = "aaaaaabcdg";
	int	n1 = 2;
	int	n2 = 4;

	printf("Result of 's1' vs 's2': %d \n",ft_strncmp(s1, s2, n1));
	printf("Result of 'aaaaaaabcd' vs 'aaaaaabcdg': %d \n",ft_strncmp(s3, s4, n2));
}*/
