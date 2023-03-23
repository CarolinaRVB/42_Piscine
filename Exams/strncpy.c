#include<stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

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
	return(dest);
}

int	main()
{
	char src[] = "hello world";
	char dest[7];
	int n = 4;
	printf("%s", ft_strncpy(dest, src, n));
}
