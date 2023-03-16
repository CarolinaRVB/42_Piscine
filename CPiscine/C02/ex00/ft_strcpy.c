/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 09:20:01 by crebelo-          #+#    #+#             */
/*   Updated: 2023/03/14 14:25:55 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
//#include<string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*int	main()
{
	//int	f;
	char	a[] = "help";
	char	b[1];
	*ft_strcpy(b, a);
	
	f = 0;
	while(b[f] != '\0')
        {
                printf("%c", b[f]);
                f++;
        }

	printf("%s", strcpy(b, a));
	return 0;
}*/
