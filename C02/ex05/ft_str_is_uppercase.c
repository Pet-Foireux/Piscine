/*
#include <stdio.h>
*/
int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 65 && str[i] <= 90))
			return (0);
		i++;
	}
	return (1);
}

/*
int main() 
{
	char str1[] = "SHREK";
	char str2[] = "FIONA";
	char str3[] = "OGRE";

	printf("str1 = %s, est en majuscules = %d\n", str1, ft_str_is_uppercase(str1));
 	printf("str2 = %s, est en majuscules = %d\n", str2, ft_str_is_uppercase(str2));
	printf("str3 = %s, est en majuscules = %d\n", str3, ft_str_is_uppercase(str3));

	return 0;
}
*/
