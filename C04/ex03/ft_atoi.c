/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpapin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 10:16:52 by mpapin            #+#    #+#             */
/*   Updated: 2024/08/16 10:16:58 by mpapin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	resultat;
	int	signe;
	int	i;

	resultat = 0;
	signe = 1;
	i = 0;
	while (str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signe = -signe;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		resultat = resultat * 10 + (str[i] - '0');
		i++;
	}
	return (signe * resultat);
}
/*
int	main(void)
{
	char	str1[] = "   --+++-32145shrek456";
	printf("%d", ft_atoi(str1));
	return (0);
}
*/
