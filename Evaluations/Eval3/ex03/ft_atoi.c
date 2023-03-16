/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcosta-p <rcosta-p@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 08:54:59 by rcosta-p          #+#    #+#             */
/*   Updated: 2023/03/16 17:41:51 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	num;

	i = 0;
	sign = 1;
	num = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = 10 * num + (str [i] - '0');
		i++;
	}
	return (num * sign);
}

int	main(void)
{
	char	str[] = "  -i-6-1988aaa579";

	printf("%d", ft_atoi(str));
}

/* 
"sign = 1 - 2 * (str[i] == '-');" --> para definir o sinal(+ ou -);
(str[i] == '-') --> boolean check, se o char for '-',
returns 1, senao returns 0.

"num = 10 * num + (str [i] - '0');" --> para transformar char em int;
(str [i] - '0') --> transforma um char em int;
num = 10 * num --> multiplica o numero anterior por 10 para mover todos os
numeros uma casa para esquerda e criar mais uma unidade 0 na parte inteira
do numero e depois ser somada ao proximo inteiro do indice.

---> ATOI --> ASCII to integer

    isspace()
              checks  for  white-space  characters.  In the "C" and 
	      "POSIX" locales, these are: space,
              form-feed ('\f'), newline ('\n'), carriage return ('\r'),
	      horizontal  tab  ('\t'),  and
              vertical tab ('\v').

RETURN VALUE
       The  values  returned  are  nonzero if the character c falls into
       the tested class, and zero if
       not.

NOTES
       The  standards require that the argument c for these functions is
       either EOF or a value that is
       representable in the type unsigned char.  If the argument c is
       of type char, it must be cast to
       unsigned char, as in the following example:

           char c;
           ...
           res = toupper((unsigned char) c);

       This is necessary because char may be the equivalent of
       signed char, in which case a byte where
       the top bit is set would be sign extended when converting to int,
       yielding a value that is out‐
       side the range of unsigned char. */
