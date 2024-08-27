/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpapin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 12:40:10 by mpapin            #+#    #+#             */
/*   Updated: 2024/08/27 18:46:53 by mpapin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*resultat;
	int	i;

	i = 0;
	resultat = malloc(sizeof(int) * (max - min));
	if (min >= max)
		return (NULL);
	if (resultat == NULL)
		return (NULL);
	while (min < max)
	{
		resultat[i] = min;
		min++;
		i++;
	}
	return (resultat);
}
/*
int	main(void)
{
	int	*resultat;
	int	i;

	resultat = ft_range(1, 50);
	i = 1;
	while (i < 50)
	{
		printf("%d\n", resultat[i]);
		i++;
	}
	free(resultat);
	return (0);
}
*/
