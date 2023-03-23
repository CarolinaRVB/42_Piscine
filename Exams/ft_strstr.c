#include<stdio.h>
char    *ft_strstr(char *str, char *to_find)
{
        int     i;
        int     j;
	int	c;

        i = 0;
        if (*to_find == '\0')
                return (str);
        while (str[i] != '\0')
        {
                j = 0;
		c = i;
                while (str[i] == to_find[j] && to_find[j] != '\0')
                {
			i++;
			j++;
		}
                if (to_find[j] == '\0')
			return (&str[c]);
		i++;
        }
        return (0);
}
int     main()
{
        char    str[] = "Hello this is a sentence";
        char    to_find[] = "is";
        printf("%s", ft_strstr(str, to_find));
}


/*#include<stdio.h>
char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (*to_find == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j] && str[i + j] != '\0')
		{
			if (to_find[j + 1] == '\0')
				return (&str[i]);
			j++;
		}
		i++;
	}
	return (0);
}
int	main()
{
	char	str[] = "Hello this is a sentence";
	char	to_find[] = "is";
	printf("%s", ft_strstr(str, to_find));
}*/
