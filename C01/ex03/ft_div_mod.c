/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpapin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 10:51:18 by mpapin            #+#    #+#             */
/*   Updated: 2024/08/08 11:06:09 by mpapin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*mod = a % b;
	*div = a / b;
}
/*
int	main(void)
{
	int a;
	int b;
	int mod;
	int div;

	mod = 0;
	div = 0;
	a = 12;
	b = 3;
	ft_div_mod(&div, a, b);
	ft_div_mod(&mod);
	printf("%d", div);
	printf("%d", mod);
	return (0);
}
*/
