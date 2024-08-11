/*
#include <stdio.h>
*/
int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 48 && str[i] <= 57))
			return (0);
		i++;
	}
	return (1);
}
/*
int main() 
{
	char str1[] = "123456";
	char str2[] = "ShrekAuToilette";
	char str3[] = "007";
	
	printf("str1 = %s, est numérique = %d\n", str1, ft_str_is_numeric(str1));
	printf("str2 = %s, est numérique = %d\n", str2, ft_str_is_numeric(str2));
	printf("str3 = %s, est numérique = %d\n", str3, ft_str_is_numeric(str3));
	
	return 0;
}
*/
