#include<stdio.h>
#include<stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*Dest;
	int	len;
	int	i;
	int	j;

	len = ft_strlen(src);
	Dest = malloc(len + 1);
	if (Dest == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (src[i] != '\0')
	{
		Dest[i] = src[j];
		i++;
		j++;
	}
	Dest[i]!= '\0';
	return (Dest);
}

int	main()
{
	char src[6] = "hello";
	printf("%s\n", ft_strdup(src));
}
