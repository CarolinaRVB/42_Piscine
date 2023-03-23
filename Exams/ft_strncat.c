#include<stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && i < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
int	main()
{
	char dest[40] = "Hello there";
	char src[] = " i am Carolina";
	printf("%s", ft_strncat(dest, src, 40));
}
