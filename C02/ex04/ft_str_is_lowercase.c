/*
#include <stdio.h>
*/

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 97 && str[i] <= 122))
			return (0);
		i++;
	}
	return (1);
}
/*
int main() 
{
	char str1[] = "shrek";
	char str2[] = "FionaEtShrek";
	char str3[] = "l'ane";

	printf("str1 = %s, est en minuscules = %d\n", str1, ft_str_is_lowercase(str1));
	printf("str2 = %s, est en minuscules = %d\n", str2, ft_str_is_lowercase(str2));
	printf("str3 = %s, est en minuscules = %d\n", str3, ft_str_is_lowercase(str3));
	
	return 0;
}
*/
