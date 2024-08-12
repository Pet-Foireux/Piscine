/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpapin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 08:37:49 by mpapin            #+#    #+#             */
/*   Updated: 2024/08/12 08:37:52 by mpapin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

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
			return (1);
		i++;
	}
	return (0);
}
/*
int main() 
{
	char str1[] = "shrek";
	char str2[] = "FionaEtShrek";
	char str3[] = "l'ane";

	printf("%d\n", ft_str_is_lowercase(str1));
	printf("%d\n", ft_str_is_lowercase(str2));
	printf("%d\n", ft_str_is_lowercase(str3));
	
	return 0;
}
*/
