/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpapin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 08:38:28 by mpapin            #+#    #+#             */
/*   Updated: 2024/08/12 08:38:30 by mpapin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/

#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i])
	{
		if (!(str[i] >= 32 && str[i] <= 126))
			return (0);
		i++;
	}
	return (1);
}
/*
int main() 
{
	char str1[] = "ShrekFaitLaCuisine";
	char str2[] = "L'Ane\nSeCache";
	char str3[] = "ShrekEtFiona";

	printf("str1 = %s, est imprimable = %d\n", str1, ft_str_is_printable(str1));
	printf("str2 = %s, est imprimable = %d\n", str2, ft_str_is_printable(str2));
	printf("str3 = %s, est imprimable = %d\n", str3, ft_str_is_printable(str3));

	return 0;
}
*/
