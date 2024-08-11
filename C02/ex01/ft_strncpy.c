/*
#include <stdio.h>
*/
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
	return (dest);
}
/*
int main() 
{
	char source[] = "ShrekEtL'Ane";
	char destination[20];
	
	ft_strncpy(destination, source, 5);
	printf("Source : %s\n", source);
	printf("Destination (premiers 5 caractères) : %s\n", destination);
	
	ft_strncpy(destination, "FionaEtShrek", 10);
	printf("Destination (premiers 10 caractères de FionaEtShrek) : %s\n", destination);
	
	return 0;
}
*/
