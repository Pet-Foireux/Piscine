/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpapin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 08:36:23 by mpapin            #+#    #+#             */
/*   Updated: 2024/08/12 08:36:55 by mpapin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>


#include <unistd.h>
*/
int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!((str[i] > 64 && str[i] < 91) || (str[i] > 96 && str[i] < 123)))
			return (0);
		i++;
	}
	return (1);
}
/*
int main()
{
	char	*str;

	str = "abcdefghijklmnopqrstuvwxyz";
	printf("str = %s, isalpha = %d\n", str, ft_str_is_alpha(str));
	str = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	printf("str = %s, isalpha = %d\n", str, ft_str_is_alpha(str));
	str = "%";
	printf("str = %s, isalpha = %d\n", str, ft_str_is_alpha(str));
	str = "[";
	printf("str = %s, isalpha = %d\n", str, ft_str_is_alpha(str));
	str = "|";
	printf("str = %s, isalpha = %d\n", str, ft_str_is_alpha(str));
}
*/
