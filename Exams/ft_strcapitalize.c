/*
 First i need to make all characters that are words, small, if they are big, and return the string itself.
 Then i need to check the position of the characters and if the character is alphabetic, if so if the position before belongs to a space or special characters like - and +, if so i capitalize the char in my current position.
 */

#include <stdio.h>

char	*mk_small(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	char	*nstr;
	int	i;

	i = 1;
	nstr = mk_small(str);
	if (nstr[0] >= 'a' && nstr[0] <= 'z')
		nstr[0] = nstr[0] - 32;
	while (nstr[i] != '\0')
	{
		if ('a' <= nstr[i] && nstr[i] <= 'z') 
		{
			if (nstr[i - 1] <= '/' || (nstr[i - 1] > '9' && nstr[i - 1] < 'A'))
			{
				nstr[i] = nstr[i] - 32;
			}
			else if (nstr[i -1] > 'Z' && nstr[i - 1] < 'a')
			{
				nstr[i] = nstr[i] - 32;
			}
			else if (nstr[i - 1] > 'z')
			{
				nstr[i] = nstr[i] - 32;
			}
		}
		i++;
	}
	return (nstr);
}

int	main()
{
	char	str[] = "ola, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";
	printf("%s", ft_strcapitalize(str));
}
