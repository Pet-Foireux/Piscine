/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpapin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 08:38:38 by mpapin            #+#    #+#             */
/*   Updated: 2024/08/12 08:38:41 by mpapin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
#include <stdio.h>
*/

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] -= 32;
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

	printf("%s", ft_strupcase(str1));
	printf("\n%s", ft_strupcase(str2));
	printf("\n%s", ft_strupcase(str3));

	return 0;
}
*/
