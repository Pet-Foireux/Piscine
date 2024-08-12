/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpapin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 10:26:45 by mpapin            #+#    #+#             */
/*   Updated: 2024/08/12 10:27:02 by mpapin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
#include <stdio.h>
*/

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] += 32;
		i++;
	}
	return (str);
}

/*
int main(void)
{
	char str1[] = "ShrekFaitLaCuisine";
	char str2[] = "L'Ane\nSeCache";
	char str3[] = "ShrekEtFiona";

	printf("%s", ft_strlowcase(str1));
	printf("\n%s", ft_strlowcase(str2));
	printf("\n%s", ft_strlowcase(str3));

	return 0;
}
*/
