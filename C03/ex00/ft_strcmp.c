/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpapin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 12:09:39 by mpapin            #+#    #+#             */
/*   Updated: 2024/08/12 12:53:08 by mpapin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>

#include <stdio.h>
*/

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	resultat;

	resultat = 0;
	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		resultat = s1[i] - s2[i];
		if (resultat > 0)
		{
			return (resultat);
		}
		if (resultat < 0)
		{
			return (resultat);
		}
		i++;
	}
	return (resultat);
}
/*
int	main(void)
{
	char	shrek[] = "a";
	char	fiona[] = "z";
	
	printf("%d", ft_strcmp(shrek, fiona));
	return(0);
}
*/
