/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpapin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 10:17:28 by mpapin            #+#    #+#             */
/*   Updated: 2024/08/19 10:17:30 by mpapin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	resultat;

	resultat = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (nb > 0)
	{
		resultat *= nb;
	}
	return (resultat);
}
/*
int main(void)
{
	int	nb;

	nb = 0;
	printf("%d", ft_iterative_factorial(nb));
	return (0);
}
*/
