/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 16:28:49 by crebelo-          #+#    #+#             */
/*   Updated: 2023/03/16 17:56:44 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	count_neg(char *str)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
        {
                if (str[i] == '-')
                        count++;
                i++;
        }
	if (count % 2 == 1)
		return (-1);
	return (1);
}

int	ft_atoi(char *str)
{
	int	i;
	int	num;

	num = 0;
	i = 0;
	while ('-' == str[i] || str[i] == '+')
	{
		i++;
	}	
	if (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + str[i] - '0';
		i++;
	}
	else
		return(0);
	return (num * count_neg(str));
}

int	main()
{
	char str[] = "  -i-6-1988aaa579";
	printf("%d", ft_atoi(str));
}

